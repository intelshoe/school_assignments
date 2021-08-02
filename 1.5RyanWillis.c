//Ryan Willis
//August 1, 2021
//1.5 Writing a C Program From the Flowchart

#include <stdio.h>

//function main begins program
int main()
{
    
    int score1, score2, total; //scores on exams and total
    char grade;                //Your grade
    float avergae;             //Class average
    
    
    score1 = 85;
    score2 = 90;
    total = score1 + score2;   //Your total score
    
    grade = 'A';               //Your grade
    
    average = 72.45;           //Class average            
    
    //Display the result to user
    printf("My scores were %d and %d.", score1, score2);
    printf("\nMy grade was %c.", grade);
    printf("\nThe class average was %f", average);
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    return 0;
}
//end function main
