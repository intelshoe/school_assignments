// Write and Call Three Functions
// Ryan Willis
// 14 Aug 2021

#include <stdio.h>

//function prototypes
void first();
void second();
void third();

main()
{
      first(); // prints "first"
      second(); // prints "second"
      third();  // prints "third"
      printf("End of program.");
      
      // wait for keypress to exit
      printf("\n\nPress any key to exit.");
      getchar();
      return;
}

void first() {
     printf("first\n");
     }
void second() {
     printf("second\n");
     }
void third() {
     printf("third\n");
     }
