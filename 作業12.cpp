#include <stdio.h> 

#include <stdlib.h> 

int main(void)

{

    int n51;  

    int w, x, y, z; 

    printf("¿é¤J­È¡G ");

    scanf("%d", &n51); 

    
    z = n51; 

    for(y=1; y<=z; y++){ 

       for(x=n51; x<z; x++) 

          printf(" ");

       for(w=1; w<=n51; w++)  

          printf("*");

       printf("\n"); 

       n51--;

    }

    

    system("pause"); 

    return 0; 

}
