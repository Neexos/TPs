#include <stdio.h>


int main()
{
	char *tab[]= {
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
	};

	char *chercher[]={"Suspendisse elementum lorem eget mi bibendum rhoncus."};
	char** ptr;
	
	int ok = 1;

	for(ptr = tab; *ptr; ptr++) {
   		if (*ptr == *chercher){
  			printf("la phrase '%s' est presente dans le tableau \n", *chercher);
  			ok = 0;
   			break;
   		}else{
   			ok = 1;
   		}
 	}
 	if(ok == 1){
 		printf("la phrase cherchée n'est pas presente dans le tableau \n", *chercher);
 	}

	return(0);
}