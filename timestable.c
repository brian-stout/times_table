#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Default values if no input is given
    int min_number = 1;
    int max_number = 10;

    //Assigns the correct values to the min_number and max_number based
    //on the command line arguments and error handles if user inputs
    //more arguments then the program should handle
    if(argc > 3){
        printf("Usage: %s <min value> <max value> \n", argv[0]);
        return 1;
    }
    //Test for two arguments
    else if (argc == 3){
        min_number = strtol(argv[1], NULL, 10);
        max_number = strtol(argv[2], NULL, 10);
    }
    //Test for one argument
    else if (argc == 2){
        max_number = strtol(argv[1], NULL, 10);
        //Prints out zero times table with one argument
        if (max_number == 0){
            min_number = 0;
        }   
    }

    //Error section for other invalid inputs
    if ((min_number < 0) || (max_number < 0)){
        printf("Error: Negative numbers are invalid\n");
        return 1;
    }
    if (min_number > max_number){
        printf("Error: First argument (%d) must be"
               " smaller than the second argument (%d)\n", min_number, max_number);
        return 1;
    }

    //Determines the amount of space nessecary to accomodate the largest product
    int column_width = 1;

    for(int i = (max_number * max_number); i > 0; i/=10){
        ++column_width;
    }

    //Determines the column_width of the first column
    int first_column_width = 0;

    for(int i = max_number; i > 0; i/=10){
        ++first_column_width;
    }

    //For stupid people who want their 0 * 0 times table
	//Also sets the minium column width to three so the product symbol formatting fits
    if(column_width == 1){
        ++column_width;
    }
    if(first_column_width < 3){
        first_column_width = 3;
    }

    //Creates a header, -2 is dervied from the two extra printed characters
    printf("%*s\u2715 \u2503", first_column_width - 2, "");

    for(int i = min_number; i <= max_number; ++i){
                printf("%*d", column_width, i);
    }

    printf("\n"); //Prints new line after top column

    //Prints out the border for the first column
    for(int i = (first_column_width); i > 0; --i){
        printf("%s", "\u2501");
    }
    //Prints out the cross section 
    printf("%s",  "\u254b");    
    
    //Prints out the border for the rest of the columns
    for(int i = column_width * (max_number - min_number + 1); i > 0; --i){
        printf("%s", "\u2501");
    }
    printf("\n"); //Prints new line after border

    for(int i = min_number; i <= max_number; ++i){
            printf("%*d\u2503", first_column_width, i);  //Prints the first column
            for(int j = min_number; j <= max_number; ++j){
                printf("%*d", column_width, i * j);
            }
            printf("\n"); //Prints new line after each row of products
    }
}
