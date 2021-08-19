#include <stdio.h>

int main()
{
    char s_name[] = "ECPI University";
    float scores[6] = {100.00, 100.0, 76.0, 97.0, 72.0, 86.7};
    float average = 0.0
    int counter;
    
    /* Compute total of scores */
    for (counter = 0; counter < 6; counter++)
        { average += scores[counter]; }
    
    /* Compute the average */
    average /= (float)6
    
    printf("At %s, your class average is %.1f.", s_name, average);
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    return;
}

