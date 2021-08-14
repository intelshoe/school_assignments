// Pass a Value to a Function that Makes a Decision
// Ryan Willis
// 14 Aug 2021

#include <stdio.h>
void printIt(); // function prototype
main()
{
      int userInput[32]; //user input before saving in int income
      int income;  // used for user's income value
      
      //ask for user income
      printf("Please enter your annual income: ");
      fgets(userInput, 32, stdin);
      sscanf(userInput, "%d", &income);
      
      // if income > 90,000, print congratualtions, otherwise keep trying
      printIt(income);
      
      //wait for keypress to exit
      printf("\n\nPress any key to exit.");
      getchar();
      getchar();
      return;
}

void printIt(income)
{
     if (income > 90000) {
                printf("Congratulations for making a good income!");
                }
     else {
          printf("Keep trying and you'll make over $90,000!"); }
}
