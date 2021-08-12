/* Ryan Willis
    Aug 11, 2021
    Description: Find the sum and the reduced sum of two numbers. */

#include <stdio.h>

int add(int x, int y);  //function prototype
void reduce(int x, int y);          // reduction prototype

int main()
{
    int a, b;
    int sum;  // declares the variable used in the program
    int reduction; // reduce the numbers variable

    printf("Enter the first number : ");   // prompt to input the first number
    scanf_s("%d", &a);        // stores the first number in variable a

    printf("Enter the second number : ");   // prompt to input the second number
    scanf_s("%d", &b);        // stores the first number in variable a

    sum = add(a, b);        // function call to add
    printf("The sum of these numbers is : %d", sum);   //display addition value

    reduce(a, b);        // function call to reduce

    return 0;
}


int add(int x, int y)           // function definition for addition
{
    return x + y;
}

void reduce(int x, int y)
{
    static int reduction[100]; // stores each digit of each number
    static int i = 0;     // used to sort through the reduction array
    static int reduced;    // final sum of all digits

    // begin sorting each digit of first number into array
    while (x > 0) {
        int mod = x % 10;   // shave off last digit
        reduction[i] = mod; // store shaved digit in array
        i++;    // increment to next element in array
        x /= 10;    // divide by 10 to go to next digit in user input
    }
    // sort each digit of second number into array
    while (y > 0) {
        int mod = y % 10;
        reduction[i] = mod;
        i++;
        y /= 10;
    }

    // adds all elements of reduction array
    for (int counter = 0; counter <= 99; counter++) {
        reduced = reduced + reduction[counter];
    }
    // print result to user
    printf("\nThe reduction of these numbers is : %d", reduced);   //display reduction value
}
