#include <stdio.h>
void firstFunction(int counter);
void secondFunction();
int thirdFuncion();

int main()
{
    int counter;  // used to count loops
    
        for (counter = 1; counter <= 5; counter++)
        {
            firstFunction(counter); // calls firstFunction in loop
        }
    thirdFunction();

    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    return 0;
}
/***************************************************************/
void firstFunction(int counter)
{
    printf("This is the first function and call number %d\n", counter);
    secondFunction();  // calls secondFunction
}
/***************************************************************/
void secondFunction()
{
    printf("This is printed from the secondFunction, which takes no arguments. \n\n");
}
/***************************************************************/
int thirdFunction()
{
    printf("And this is printed from the thirdFunction, which takes no arguments.");
    return 0;
}
