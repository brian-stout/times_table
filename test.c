#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    int column_width = 4;
    int first_column_width = 2;
    char underline[64] = {"\u2500"};

    for(int i = column_width; i>0; --i){ 
        strncat(underline, "\u2500", sizeof(underline));
    }
    for int i = 50; i>0; --i){
        printf("%s", underline);
    }

    printf("%s  \n", underline);
}
