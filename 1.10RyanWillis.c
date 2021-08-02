//Ryan Willis
//August 1, 2021
//1.10 A Flowchart and C Code

#include <stdio.h>

//function main begins program
int main()
{

    char userInput[64]; //user input before converting to int
    int start = 0;      //starting value
    int result;         //start * start

    //accept and tests user input in a while loop
    while (start == 0) {
          printf("Please enter a whole number between 1 and 99: ");
          fgets(userInput, 63, stdin);
          
          //make sure user input correct length
          if( strlen(userInput) < 2 || strlen(userInput) > 3) {
              printf("Invalid string length.\n");
              continue; 
              }
          
          //make sure user input is a number
          if( sscanf(userInput, "%d", &start) != 1) {
              start = 0;
              printf("Invalid number.\n");
              continue;
              }
          
          //make sure number is between 1 and 99
          if(start < 1 || start > 99) {
                 start = 0;
                 printf("Number is not between 1 and 99.\n");
                 continue;
                 }
          //if the above tests are successful, display the number
          printf("You entered a valid number of %d\n", start);
                                
    }
    
    //multiply the number by itself
    result = start * start;

    //display the result
    printf("\n%d times itself equals %d.", start, result);
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
