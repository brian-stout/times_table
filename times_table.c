#include <stdio.h>

int main(void)
{
    int max_number = 10;


    for(int i = 1; i <= max_number; ++i){
            
            for(int n = 1; n <= max_number; ++n){

                printf("   %d", i * n);
            }
            printf("\n");
        }




}
