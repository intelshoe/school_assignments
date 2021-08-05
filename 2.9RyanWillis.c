//Ryan Willis
//August 5, 2021
//2.9 Use a "for" Loop

#include <stdio.h>

//function main begins program
int main()
{
    int counter;

    //begin loop that prints 1 through 10
    for (counter=1; counter<=10; counter++)
        {printf("%d \n", counter);}
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
