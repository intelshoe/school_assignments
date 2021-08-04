//Ryan Willis
//August 4, 2021
//2.6 Use a "while" Loop

#include <stdio.h>

//function main begins program
int main()
{
    char userInput[64]; //user input before saving in char answer
    char answer;        //user's answer

    //asks for user input and save in char answer
    printf("Do you want to continue (Y/N)? ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%c", &answer);
    
    /* If answer is not Y or N then repeatedly ask for correct input */
    while ((answer != 'Y') && (answer != 'N'))
          { printf("\nYou must type a Y or an N\n"); //warn of incorrect entry
            printf("Do you want to continue (Y/N)? "); //ask again
            //accept user input and return to while test
            fgets(userInput, 63, stdin);
            sscanf(userInput, "%c", &answer); }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
