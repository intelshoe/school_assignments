//Ryan Willis
//August 5, 2021
//2.13 "for" Loop

#include <stdio.h>

//function main begins program
int main()
{
    char userInput[32]; //user input before saving in int age
    int age;           //user's age
    int counter;       //loop counter

    printf("Please enter your age: ");
    fgets(userInput, 32, stdin);
    sscanf(userInput, "%d", &age);
    
    //begin loop that display happy birthday for each year of age
    for (counter = 1; counter <= age; counter = counter + 1){
        printf("Happy Birthday! (year %d)\n", counter); }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
