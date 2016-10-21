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
    
    //Determines the amount of space nessecary to accomade the largest product
    int column_width = 1;

    for(int i = (max_number * max_number); i > 0; i/=10){
        column_width++;
    }

    //Determines the column_width of the first column
    int first_column_width = 0;

    for(int i = max_number; i > 0; i/=10){
        first_column_width++;
    }

    //Creates a header
    printf("%*s", first_column_width, "*");

    for(int i = min_number; i <= max_number; ++i){
                printf("%*d", column_width, i);
    }

    printf("\n");

    for(int i = min_number; i <= max_number; ++i){
            printf("%*d", first_column_width, i);
            for(int n = min_number; n <= max_number; ++n){
                printf("%*d", column_width, i * n);
            }
            printf("\n");
    }




}
