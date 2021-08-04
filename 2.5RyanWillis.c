//Ryan Willis
//August 4, 2021
//2.5 Use an "if..else" Statement

#include <stdio.h>

//function main begins program
int main()
{
    int number;         //user's number
    char userInput[64]; //user input

    //asks for the number
    printf("Please enter a whole number: ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &number);
    
    /* if the number is greater than 0 then say so
    otherwise tell the user then number is less than or equal to 0 */
    if (number > 0)
       { printf("More than 0\n"); }
    else
       { printf("Less than or equal to 0\n"); }
    
    printf("\nEnd of program");
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
