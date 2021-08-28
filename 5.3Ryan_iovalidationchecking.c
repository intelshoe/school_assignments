// Ryan Willis
// 28 Aug 2021

#include <stdio.h>
#include <ctype.h> // needed for isalpha()

main()
{
      char initial;
      printf("What is your first initial? ");
      scanf(" %c", &initial); // read user input
      
      while(! isalpha(initial))
          {
              printf("\nThat was not a valid initial!\n");
              printf("\nWhat is your first initial? ");
              //read input
              scanf(" %c", &initial);
          }
             
      printf("\nThanks!");
      //wait for keypress to exit
      printf("\n\nPress any key to exit.");
      getchar();
      getchar();
      return 0;
}
