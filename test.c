#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int min_number = 0;
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
        min_number = 0;
        max_number = strtol(argv[1], NULL, 10);    
    }

printf("%d  %d \n", min_number, max_number);


}
