#include <stdio.h>

int main(void)
{
    int max_number = 10;

    for(int i = 0; i <= max_number; ++i){
            if (i == 0){
                printf("%4s", "*");
            }
            else{
                printf("%4d", i);
            }
        }

    printf("\n");

    for(int i = 1; i <= max_number; ++i){
            printf("%4d", i);
            for(int n = 1; n <= max_number; ++n){
                printf("%4d", i * n);
            }
            printf("\n");
        }




}
