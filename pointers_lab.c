//Ryan Willis
//August 17, 2021
//3.2 Parking Garage Lab

#include <stdio.h>

//function prototype
float calculateCharges(float *x, float *y, float *z);

//function main begins program
int main()
{
    char userInput[32];  //user input
    float hours1, hours2, hours3;        //number of hours in garage for car 3
    //these three variables used to store hours before they are converted into charges
    float h1, h2, h3;
    float totalHours; // total of all hours parked
    float totalCharges; // total of all charges

    //asks for user input and save in hours1
    printf("Enter the hours parked for car 1: ");
    fgets(userInput, 32, stdin);
    sscanf_s(userInput, "%f", &hours1);

    //asks for user input and save in hours2
    printf("Enter the hours parked for car 2: ");
    fgets(userInput, 32, stdin);
    sscanf_s(userInput, "%f", &hours2);

    //asks for user input and save in hours3
    printf("Enter the hours parked for car 3: ");
    fgets(userInput, 32, stdin);
    sscanf_s(userInput, "%f", &hours3);

    //store values before conversion for final output
    h1 = hours1;
    h2 = hours2;
    h3 = hours3;

    calculateCharges(&hours1, &hours2, &hours3);

    //calulate totals
    totalHours = h1 + h2 + h3;
    totalCharges = hours1 + hours2 + hours3;

    //final output
    printf("Cars        Hours         Charge\n");
    printf("1            %.1f            %.2f\n", h1, hours1);
    printf("2            %.1f            %.2f\n", h2, hours2);
    printf("3            %.1f           %.2f\n", h3, hours3);
    printf("TOTAL        %.1f           %.2f", totalHours, totalCharges);

    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}

float calculateCharges(float *x, float *y, float *z) {
    //calculate cost of first car
    if (*x <= 3) {
        *x = 20.00;  // minimum fee
    }
    else if (*x > 3 && *x <= 9) {
        *x = 20 + ((*x - 3) * 5); // below $50
    }
    else {
        *x = 50; // max fee
    }

    //calculate cost of second car
    if (*y <= 3) {
        *y = 20.00;
    }
    else if (*y > 3 && *y <= 9) {
        *y = 20 + ((*y - 3) * 5);
    }
    else {
        *y = 50;
    }

    //calculate cost of third car
    if (*z <= 3) {
        *z = 20.00;
    }
    else if (*z > 3 && *z <= 9) {
        *z = 20 + ((*z - 3) * 5);
    }
    else {
        *z = 50;
    }

    return *x, *y, *z;
}
