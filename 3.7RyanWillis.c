// Passing User Values to a Function and Using the Return Value of the Function
// Ryan Willis
// 14 Aug 2021

#include <stdio.h>
char calculateLetterGrade (int numGrade);
main()
{
      int numGrade; /*Numerical grade to be entered*/
      char grade;
      printf("What is your numerical grade? ");
      scanf("%d", &numGrade);
      
      grade = calculateLetterGrade(numGrade); /*function to convert grade*/
      printf("\nYour letter grade is %c\n", grade);
      
      //wait for keypress to exit
      printf("\n\nPress any key to exit.");
      getchar();
      getchar();
      return;
}

char calculateLetterGrade (numGrade)
{
     char outputGrade;
     //calculate character grade based on number grade
          if (numGrade >= 90 && numGrade <= 100)
          {
                       outputGrade = 'A';
                       }
          else if ( numGrade >= 80 && numGrade <= 89)
          {
               outputGrade = 'B';
               }
          else if ( numGrade >= 70 && numGrade <= 79)
          {
               outputGrade = 'C';
               }
          else if ( numGrade >= 69 && numGrade <= 69)
          {
               outputGrade = 'D';
               }
          else {
               outputGrade = 'F';
               }
     return outputGrade;
}
