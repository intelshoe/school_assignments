//Ryan Willis
//August 1, 2021
//1.11 Flowchart and Decision

#include <stdio.h>

//function main begins program
int main()
{
    int age = 0;      //user's age
    char userInput[64]; //user input

    //asks for user's age
    printf("Please enter your age: ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &age);
    
    // if older than 18, you can vote, otherwise you cannot
    if (age > 18) {
       printf("You are old enough to vote!"); }
    else {
       printf("You are not old enough to vote."); }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
