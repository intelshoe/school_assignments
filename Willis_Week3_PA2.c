//Ryan Willis
//August 23, 2021
//3.3 Math Practice Week 3

#include <stdio.h>

//function prototypes
void addition();
void subtract();
void multiply();
void divide();

//function main begins program
int main()
{
    int option = 0;               //menu options
    
    //go back to menu as long as option 5 (quit) not selected
    while ( option != 5) {
          option = 0; //reset option when starting over loop
          printf("Math Practice Program Menu\n\n");
          printf("1. Addition");
          printf("\n2. Subtraction");
          printf("\n3. Multiplication");
          printf("\n4. Division");
          printf("\n5. Exit");
          printf("\nSelect an option: ");
          scanf("%d", &option);
          //breaks out of while loop if option 5 chosen
              if (option == 5) { break; }
              //code for addition
              else if (option == 1) { 
                   addition();                           
              } else if (option == 2) {
                     //calls subtraction function
                     subtract();
              } else if (option == 3) {
                     multiply();
              } else if (option == 4) {
                     divide(); }              
    }

}
//end function main

void addition () {
    int guess = 0;
    int num1 = rand()%100;
    int num2 = rand()%100;
    
    printf("\n%d + %d = ? ", num1, num2);
    scanf("%d", &guess);
    if ( guess == (num1 + num2)){
         printf("\nCorrect!\n\n"); }
    else {
         printf("\nSorry, try again.\n\n"); }
}

void subtract () {
    int guess = 0;
    int num1 = rand()%100;
    int num2 = rand()%100;
    
    printf("\n%d - %d = ? ", num1, num2);
    scanf("%d", &guess);
    if ( guess == (num1 - num2)){
         printf("\nCorrect!\n\n"); }
    else {
         printf("\nSorry, try again.\n\n"); }
}

void multiply () {
    int guess = 0;
    int num1 = rand()%10;
    int num2 = rand()%10;
    
    printf("\n%d * %d = ? ", num1, num2);
    scanf("%d", &guess);
    if ( guess == (num1 * num2)){
         printf("\nCorrect!\n\n"); }
    else {
         printf("\nSorry, try again.\n\n"); }
}

void divide () {
    int guess = 0;
    int num1 = rand()%100;
    int num2 = rand()%10;
    
    printf("\n%d / %d = ? ", num1, num2);
    scanf("%d", &guess);
    if ( guess == (num1 / num2)){
         printf("Now enter any remainder: ");
         scanf("%d", &guess);
         if (guess == (num1 % num2)){
                   printf("Correct!\n\n"); }
         else { printf("Sorry, try again.\n\n");} }
    else {
         printf("\nSorry, try again.\n\n"); }
}

