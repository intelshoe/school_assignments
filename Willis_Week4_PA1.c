#include <stdio.h>

int main()
{
    int seats[11]; // hold assigned seat numbers
    int counter;  // used to loop through temps
    int i = 0; // user input

    
    int firstClass = 0;
    int economy = 5; // economy seats start at 6 - 10    
    
    while ( i != 3 ) { // while user is not choosing 3 to quit
          printf("Please type 1 for first class.\n\
Please type 2 for economy. \n\
Please type 3 to quit. ");
          //read user input into i
          scanf("%d", &i);
        
          if (i == 1 && firstClass < 5 ) { // if choosing first class and it's open
             firstClass++;
             seats[firstClass] = 1;
             printf("Your seat number is %d in first class.\n\n", firstClass);
          } 
          else if ( i == 2 && economy < 10 ) { // if choosing economy and open
                   economy++;
                   seats[economy] = 1;
                   printf("Your seat number in economy is %d \n\n", economy);
          } 
          else if ( i == 1 && firstClass >= 5 && economy < 10) {
                   printf("The first class section is full, but you may try economy.");
          } 
          else if ( i == 2 && economy >= 10 && firstClass < 5 ) {
                 printf("The economy section is full, but you may buy first class.");
          } 
          else if ( i == 1 || i == 2 && economy >= 10 && firstClass >= 5 ) {
                 printf("All seats for the flight are sold. \n\
The next flight leaves in 3 hours.");
                             break;
          } else { // 3 for quit was chosen
            printf("Thank you, we hope you have a nice day!"); }
            }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    getchar();
    return;
}
