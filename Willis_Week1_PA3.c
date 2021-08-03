//Ryan Willis
//August 3, 2021
//1.5 Math Practice Week 1

#include <stdio.h>

//function main begins program
int main()
{
    int answer;              //user's answer
    char userInput[64];      //user input to be parsed into above

    //Present problem
    printf("30.00 + 20.00 = ? ");
    
    //accept user input
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &answer);
    
    
    //test correctness and display score
    if (answer == 50) {
               printf("\nCorrect!"); }
    else {
         printf("\nIncorrect"); }
    
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
