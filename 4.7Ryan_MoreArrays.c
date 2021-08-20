#include <stdio.h>

main()
{
    int temperature[12]; // array holds 12 temperatures
    int counter;  // used to loop through temps
    int userInput[32]; // used to store accept temps before stored
    
    //accepts temperatures
    for (counter=1; counter<13; counter++)
    {  
      //ask for monthly temp averages
      printf("\nEnter the average temperature for month %d: ", counter);
      fgets(userInput, 32, stdin);
      sscanf(userInput, "%d", &temperature[counter-1]); // saves temp in array
    }
    
    printf("\n\nYou entered the following temperature averages for the year: \n");
    //prints the temperatures entered
    for (counter=0; counter<12; counter++)
    {  
      printf("%d \n", temperature[counter]);
    }
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    return;
}
