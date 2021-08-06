//Ryan Willis
//August 6, 2021
//2.12 Do...While Loop

#include <stdio.h>

//function main begins program
int main()
{
    int num = 1;            //starting number

    //prints 1 through 10 with space between each number
    do {
        printf("%d\n\n", num);
        num = num + 1;
    } while (num < 11);
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
