//Ryan Willis
//August 3, 2021
//2.3 Use an "if" Statement to Decide if an Age Is Reasonable

#include <stdio.h>

//function main begins program
int main()
{
    int age;                 //user's age
    char userInput[64];      //user input to be parsed into above

    //Present problem
    printf("What is the student's age? ");
    
    //accept user input
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &age);
    
    
    //test correctness and display score
    if (age < 10) {
         printf("\nThe age cannot be less than 10.");
         printf("\nTry again.\n");
         //accept user input
         fgets(userInput, 63, stdin);
         sscanf(userInput, "%d", &age); }
    
    printf("\nThank you. You entered a valid age.");
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
