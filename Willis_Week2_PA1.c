//Ryan Willis
//August 7, 2021
//2.3 Math Practice Week

#include <stdio.h>

//function main begins program
int main()
{
    
    char userInput[32];  //user input before saving
    int num1, num2;      //numbers to be used in math
    int option = 0;      //menu options
    
    //go back to menu as long as option 5 (quit) not selected
    while ( option != 5) {
          printf("Math Practice Program Menu\n\n");
          printf("1. Addition");
          printf("\n2. Subtraction");
          printf("\n3. Multiplication");
          printf("\n4. Division");
          printf("\n5. Exit");
          printf("\nSelect an option: ");
          fgets(userInput, 32, stdin);
          sscanf(userInput, "%d", &option);
          //breaks out of while loop if option 5 chosen
              if (option = 5) { break; } 
    }
    
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
