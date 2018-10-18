#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[][100] = {
        "Cras non vehicula augue.",
        "Nullam placerat porttitor imperdiet.",
        "Sed et lacus magna.",
        "Suspendisse elementum lorem eget mi bibendum rhoncus.",
        "Vestibulum sollicitudin nisl purus, vel varius mauris hendrerit sit amet.",
        "Mauris pretium a dolor in vehicula.",
        "Pellentesque laoreet rutrum purus a maximus.",
        "Quisque gravida semper turpis ac lobortis.",
        "Ut feugiat gravida facilisis.",
        "Morbi bibendum viverra libero, ut fermentum turpis viverra eu."
    };//declaration du tableau de 10 phrases
        
    char chercher[100] = {"Vestibulum sollicitudin nisl purus, vel varius mauris hendrerit sit amet."};//declaration de phrase a rechercher
    
    int nb_phrases = sizeof(tab)/sizeof(*tab);//nombre de phrases du tableau
    int phrase,caractere,ok;
    
    for(phrase=0;phrase<nb_phrases;phrase++){
        ok=0;
        for(caractere=0;caractere<sizeof(*tab);caractere++){
            if(!(tab[phrase][caractere] == chercher[caractere])){
                ok=1;
                break;
                
            }else{
                continue;
            }
        }
        if(ok==0){
            printf("la phrase '%s' est présente dans le tableau à l'indice %i\n",chercher,phrase);
            break;
            
        }
    }
    if(ok==1){
        printf("La phrase recherchée n'est pas présente dans le tableau\n");
    }
    return 0;
}