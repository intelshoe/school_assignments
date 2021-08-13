#include <stdio.h>

void do_fun(int *amtAddres);    // function which modifies value of amt

int main()
{
    int amt;
    
    amt = 100;  // Initially set to 100
    printf("In main(), amt is %d \n", amt);
    
    do_fun(&amt);      // Pass the memory address of amt
    printf("After return, amt is %d in main() \n", amt);
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    
    return 0;
}

void do_fun(int *amtAddress)  // Gets passed the memory location for variable amt
{
     *amtAddress = 85;        // The value in memory location for variable amt
                              // is set to 85
     printf("In do_fun(), amt is %d \n", *amtAddress);
     return;
}
