/* Fichier: serveur.c
 * Communication client-serveur
 * Auteurs: John Samuel, ...
 */
#include <sys/types.h> 
#include <sys/socket.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "serveur.h"
#include "operators.h"
#include "repertoire.h"

/* renvoyer un message (*data) au client (client_socket_fd)
 */
int renvoie_message(int client_socket_fd, char *data) {
  int data_size = write (client_socket_fd, (void *) data, strlen(data));
  if (data_size < 0) {
    perror("erreur ecriture");
    return(EXIT_FAILURE);
  }
  return 0;
}

/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. En suite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd) {
  struct sockaddr_in client_addr;
  char data[1024];

  unsigned int client_addr_len = sizeof(client_addr);
 
  // nouvelle connection de client
  int client_socket_fd = accept(socketfd, (struct sockaddr *) &client_addr, &client_addr_len);
  if (client_socket_fd < 0 ) {
    perror("accept");
    return(EXIT_FAILURE);
  }

  memset(data, 0, sizeof(data));

  //lecture de données envoyées par un client
  int data_size = read (client_socket_fd, (void *) data, sizeof(data));
      
  if (data_size < 0) {
    perror("erreur lecture");
    return(EXIT_FAILURE);
  }
        
  printf ("Message recu: %s\n", data);
  char code[10];
  sscanf(data, "%s:", code);

  //Si le message commence par le mot: 'message:' 
  if (strcmp(code, "message:") == 0) {
    char data[1024];                        //réponse au client
    memset(data, 0, sizeof(data));
    char message[100];
    printf("Votre réponse au client (max 100 caracteres): ");
    fgets(message, 1024, stdin);
    strcpy(data, "message: ");
    strcat(data, message);
    renvoie_message(client_socket_fd, data);
  }
  //Si le message commence par le mot: 'calcule:'
  else if (strcmp(code,"calcule:") == 0){
        char code[10];
        char op[2];
        float num1,num2;
        float resultat;
        char buff[100];
        sscanf(data,"%s %s %f %f", code, op, &num1, &num2);
        switch (op[0]){
            case '+':
                resultat = somme(num1,num2);
                break;
            
            case '*':
                resultat = produit(num1,num2);
                break;
            
            case '-':
                resultat = difference(num1,num2);
                break;
            
            case '/':
                resultat = quotient(num1,num2);
                break;
            
            case '%':
                resultat = modulo(num1,num2);
                break;
            
            case '&':
                resultat = et(num1,num2); 
                break;
            
            case '|':
                resultat = ou(num1,num2);       
                break;
            
            case '~':
                resultat = negation(num1);
                break;
                
            default:
                memset(data, 0, sizeof(data));               
                strcpy(data, "veuillez utiliser la synthaxe: calcule: [operateur] [num1] [num2]\n");
                renvoie_message(client_socket_fd, data);
                break;
        }
        sprintf(buff,"%f",resultat);
        memset(data, 0, sizeof(data));               
        strcpy(data, "resultat: ");
        strcat(data, buff);
        renvoie_message(client_socket_fd, data);
    }
    else if(strcmp(code, "moyenne:") == 0){
        char buff[100];
        
        struct maillon{
            unsigned char num_etud;
            int note_1;
            int note_2;
            int note_3;
            int note_4;
            int note_5;
            struct maillon* next;
        };
        
        struct maillon* element(int val_etud, int val1, int val2, int val3, int val4, int val5, struct maillon* cptr){
            struct maillon* new = malloc(sizeof(struct maillon));
            new->num_etud = val_etud;
            new->note_1 = val1;
            new->note_2 = val2;
            new->note_3 = val3;
            new->note_4 = val4;
            new->note_5 = val5;
            new->next = cptr;
            return new;
        }
        
        struct maillon* first = NULL;
        
        first = element(lire_dossier_recursif("etudiant"));
        
    }
  return 0;
  //fermer le socket 
  close(socketfd);
}

int main() {

  int socketfd;
  int bind_status;
  struct sockaddr_in server_addr;

  /*
   * Creation d'un socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if ( socketfd < 0 ) {
    perror("Unable to open a socket");
    return -1;
  }

  int option = 1;
  setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

  //détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  bind_status = bind(socketfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
  if (bind_status < 0 ) {
    perror("bind");
    return(EXIT_FAILURE);
  }
 
  listen(socketfd, 10);
  recois_envoie_message(socketfd);

  return 0;
}
