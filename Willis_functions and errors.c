//Ryan Willis
//August 24, 2021
//4.3 Math Practice Week 4

#include <stdio.h>

//function prototypes
void addition(int d);
void subtract(int d);
void multiply(int d);
void divide(int d);
int difficulty(char level);

//function main begins program
int main()
{
    int option = 0;               //menu options
    char level;  //takes character difficulty input
    int d; //level digit for rand gineration

    //go back to menu as long as option 5 (quit) not selected
    while (option != 5) {
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
        printf("\nPlease enter difficulty level e-easy, m-medium, or h-hard. ");
        label:
        scanf(" %c", &level);
        int d = difficulty(level);
        //if error code, go to top of input for difficulty
        if (d == 1400) {
           goto label;    // jump back up
           }
        //code for addition
        else if (option == 1) {
            addition(d);
        }
        else if (option == 2) {
            //calls subtraction function
            subtract(d);
        }
        else if (option == 3) {
            multiply(d);
        }
        else if (option == 4) {
            divide(d);
        }
    }

}
//end function main



int difficulty(char level) {
    if (level == 'e') {
           return 10; // starting random number to use for easy level
    } else if (level == 'm') {
           return 100; // starting value for medium rand number
    } else if (level == 'h') {
           return 1000; // starting value for hard rand number
    } else {
           printf("Sorry, please enter e for easy, m for medium, or h for hard.");
           return 1400; //error code
    }
}



void addition(int d) {
    int guess = 0;
    int num1;
    int num2;

    num1 = rand() % d;
    num2 = rand() % d;
    printf("\n%d + %d = ? ", num1, num2);
    scanf("%d", &guess);
    
    if (guess == (num1 + num2)) {
       printf("\nCorrect!\n\n");
    }
    else {
       printf("\nSorry, play again.\n\n");
    }
}

void subtract(int d) {
     int guess = 0;
     int num1 = rand() % d;
     int num2 = rand() % d;

     printf("\n%d - %d = ? ", num1, num2);
     scanf("%d", &guess);
     
     if (guess == (num1 - num2)) {
        printf("\nCorrect!\n\n");
     }
     else {
          printf("\nSorry, play again.\n\n");
     }
}

void multiply(int d) {
     int guess = 0;
     int num1 = rand() % d;
     int num2 = rand() % d;

     printf("\n%d * %d = ? ", num1, num2);
     scanf("%d", &guess);
     
     if (guess == (num1 * num2)) {
        printf("\nCorrect!\n\n");
     }
     else {
     printf("\nSorry, play again.\n\n");
     }
}

void divide(int d) {
     int guess = 0;
     int num1 = rand() % d + 10;
     int num2 = rand() % d + 5;

     printf("\n%d / %d = ? ", num1, num2);
     scanf("%d", &guess);
     
     if (guess == (num1 / num2)) {
        printf("Now enter any remainder: ");
        scanf("%d", &guess);
        if (guess == (num1 % num2)) {
           printf("Correct!\n\n");
        }
        else { printf("Sorry, play again.\n\n"); }
     } else {
            printf("Sorry, play again.\n\n"); }
}

