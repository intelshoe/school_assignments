//Ryan Willis
//August 1, 2021
//1.8 A Simple "if" Statement

#include <stdio.h>

//function main begins program
int main()
{
    
    int score1, score2, total; //scores on exams and total
    float average;             //Your average
    
    //record the first score
    printf("What is the first score? ");
    scanf("%d", &score1);
    
    //record the second score
    printf("What is the second score? ");
    scanf("%d", &score2);
    
    total = score1 + score2;   //Your total score
    
    average = total / 2;       //Your score average            
    
    //If the average is more than or equal to 65, you pass
    //otherwise display "You failed."
    if (average >= 65)
    {printf("\nYou passed!");}
    else
    {printf("\nYou failed.");}
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    getchar();
    return 0;
}
//end function main
