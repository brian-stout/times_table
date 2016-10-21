#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int min_number = 1;
    int max_number = 10;

    if(argc > 3) {
        printf("Usage: %s <min value> <max value> \n", argv[0]);
        return 1;
    }
    else if (argc == 3){
        min_number = strtol(argv[1], NULL, 10);
        max_number = strtol(argv[2], NULL, 10);
    }
    else if (argc == 2){
        min_number = 1;
        max_number = strtol(argv[1], NULL, 10);    
    }


    //Creates a header
    printf("%4s", "*");
    for(int i = min_number; i <= max_number; ++i){
                printf("%4d", i);
    }

    printf("\n");

    for(int i = min_number; i <= max_number; i++){
            printf("%4d", i);
            for(int n = min_number; n <= max_number; ++n){
                printf("%4d", i * n);
            }
            printf("\n");
    }




}
