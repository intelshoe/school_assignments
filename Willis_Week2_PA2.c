//Ryan Willis
//August 7, 2021
//2.3 Math Practice Week 2

#include <stdio.h>

//function main begins program
int main()
{
    
    char userInput[32];            //user input before saving
    float num1, num2, ans, guess; //numbers used, guess, and answer
    int option = 0;               //menu options
    
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
              if (option == 5) { break; }
              //code for addition
              else if (option == 1) { 
                   printf("\n\nEnter number 1: ");
                   fgets(userInput, 32, stdin);
                   sscanf(userInput, "%f", &num1);
                   printf("Enter number 2: ");
                   fgets(userInput, 32, stdin);
                   sscanf(userInput, "%f", &num2);
                   printf("\n%.2f + %.2f = ? ", num1, num2);
                   fgets(userInput, 32, stdin);
                   sscanf(userInput, "%f", &guess);
                   ans = num1 + num2;
                   //display correct or incorrect with answer
                   if (guess == ans) {
                        printf("\nCorrect!\n\n");     
                   } else if (guess != ans){
                        printf("\nIncorrect, Answer: %.2f", ans); }                                      
              }  //end of addition code                   
    }
    
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
