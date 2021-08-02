//Ryan Willis
//August 1, 2021
//1.3 Integer Lab

#include <stdio.h>

//function main begins program
int main()
{
    int num1, num2;      //user's age
    char userInput[64]; //user input

    //asks for the 1st number
    printf("Please enter a whole number: ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &num1);
    //asks for the 2nd number
    printf("\nPlease enter another whole number: ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &num2);
    
    // find the biggest, or if they are equal
    // display the result
    if (num1 > num2) {
       printf("\n%d is the largest.", num1); }
    else if (num2 > num1) {
       printf("\n%d is the largest.", num2); }
    else {
       printf("\nThese numbers are equal."); }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
