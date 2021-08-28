#include <stdio.h>
void main(void);

void main()
{
    int v[5]; // will store user input

    printf("Enter 437 and we will store in v[0] using %%d: ");
    scanf("%d", &v[0]);

    printf("Enter 437 and we will store in v[1] using %%i: ");
    scanf("%i", &v[1]);

    printf("Enter 437 and we will store in v[2] using %%u: ");
    scanf("%u", &v[2]);

    printf("Enter 437 and we will store in v[3] using %%o: ");
    scanf("%o", &v[3]);

    printf("Enter 437 and we will store in v[4] using %%x: ");
    scanf("%x", &v[4]);

    printf("Read with %%d: \n \
%d %d %d %d %d", v[0], v[1], v[2], v[3], v[4]);
   
   printf("\n\nRead with %%i: \n \
%i %i %i %i %i", v[0], v[1], v[2], v[3], v[4]);

   printf("\n\nRead with %%o: \n \
%o %o %o %o %o", v[0], v[1], v[2], v[3], v[4]);

   printf("\n\nRead with %%u: \n \
%u %u %u %u %u", v[0], v[1], v[2], v[3], v[4]);

   printf("\n\nRead with %%x: \n \
%x %x %x %x %x", v[0], v[1], v[2], v[3], v[4]);

    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    getchar();
    return;
}
