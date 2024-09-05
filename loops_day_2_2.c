#include <stdio.h>

int main()
{
    //this code hasn't finished yet :)
    
    for(int i=0;i<7;i++){
       
        for(int j=0;j<7-i;j++){
            printf(" ");   

        }
        for(int k=0;k<=i*2;k++){
   
             printf("*");

        }

             printf("\n");

     }
    
    return 0;
}