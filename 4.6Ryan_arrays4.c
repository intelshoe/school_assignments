#include <stdio.h>
#define FRIENDS 6

main()
{
    int age[FRIENDS]; // array hold 6 friends ages
    int counter;  // used to loop through ages
    
    age[0] = 31;
    age[1] = 25;
    age[2] = 54;
    age[3] = 45;
    age[4] = 30;
    age[5] = 18;
    
    printf("The ages of 6 of my friends are:\n");
    
    //prints all ages
    for (counter=0; counter<FRIENDS; counter++)
    { printf("%d \n", age[counter]); }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    return;
}
