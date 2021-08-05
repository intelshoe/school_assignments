//Ryan Willis
//August 5, 2021
//2.7 Use a "do...while" Loop

#include <stdio.h>

//function main begins program
int main()
{
    char userInput[32]; //user input before saving in char answer
    char answer;        //user's answer

    do {
    //asks for user input and save in char answer
    printf("Do you want to continue (Y/N)? ");
    fgets(userInput, 32, stdin);
    sscanf(userInput, "%c", &answer);
    } /* If answer is not Y or N then repeatedly ask for correct input */
    while ((answer != 'Y') && (answer != 'N'));
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
