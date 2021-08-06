//Ryan Willis
//August 6, 2021
//2.11 "if" Statement and Calculation

#include <stdio.h>

//function main begins program
int main()
{
    
    char userInput[32]; //user input before saving in int num
    int num;            //starting number
    int sq;             //number squared
    int cube;           //number cubed

    //ask and save starting number
    printf("Please enter a whole number: ");
    fgets(userInput, 32, stdin);
    sscanf(userInput, "%d", &num);
    
    //if number is greater than 1 then find and display square and cubed
    if (num > 1) {
            //find squared value
            sq = num * num;
            printf("%d squared is %d\n", num, sq);
            //find cubed value
            cube = num * num * num;
            printf("%d cubed is %d\n", num, cube);
    } else {
        printf("%d is not greater than 1.", num);}    
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
