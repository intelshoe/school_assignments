//Ryan Willis
//August 3, 2021
//1.4 Performance Assessment: BMI Lab

#include <stdio.h>

//function main begins program
int main()
{
    int weight, height;      //user's age
    char userInput[64];      //user input to be parsed into above
    float bmi;               //BMI

    //asks for weight and save in int
    printf("Please enter your weight in pounds: ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &weight);
    //asks for the 2nd number
    printf("Please enter your height in inches: ");
    fgets(userInput, 63, stdin);
    sscanf(userInput, "%d", &height);
    
    //calculate bmi
    bmi = (weight * 703) / (height * height);
    
    // display BMI
    printf("\nYour BMI is: %f\n", bmi);
    
    //display the dpt of health BMI values
    printf("\nBMI values according to the Department of Health Services \n \
    and National Institutes of Health: \n");
    printf("\nUnderweight:  less than 18.5");
    printf("\nNormal:  between 18.5 and 24.9");
    printf("\nOverweight:  between 25 and 29.0");
    printf("\nObese:  30 or greater");
    
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
//end function main
