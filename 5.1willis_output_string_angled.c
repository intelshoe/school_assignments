#include <stdio.h>

int main(void)
{
    puts("String output using character array");
    char h[] = "Happy Birthday"; //initialize char array h
    for (size_t i = 0; h[i] != '\0'; ++i)
    {
        printf("\t%c \n", h[i]);
    }
    printf("\n\n");
    
    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
