//Unit 3 GP 3.2

#include <stdio.h>

void firstFunction();
void secondFunction();
int main()
{
    printf("Function Demo \n");
    firstFunction();
    secondFunction();
    printf("Main ending\n");
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    return 0;
}

void firstFunction()
{
     printf("Printing from firstFunction\n");
     return;
}

void secondFunction()
{
     printf("Printing from secondFunction\n");
     return;
}
