#include <stdio.h>
#include <string.h>     // for strcpy_s, strcat_s

int main(void)
{
    puts("String output using character array");
    char h[] = "Happy Birthday"; //initialize char array h
    char angle[500] = "\t";
    for (size_t i = 0; h[i] != '\0'; ++i)
    {
        strcat_s(angle, sizeof angle, "\t");

        printf("%s %c \n", angle, h[i]);
    }
    printf("\n\n");

    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
}
