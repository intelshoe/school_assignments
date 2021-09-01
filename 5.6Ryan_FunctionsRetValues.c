/* Final Exam: 5.7 Catered Family Dinner

   Ryan Willis
   29 Aug 2021  */

#include <stdio.h>
#include <ctype.h>

main()
{
    printf("Enter a character: ");
    int c = getchar();
    if (isdigit(c) == 0)
    { printf("User entered the character: %c\n", c);
    
    // isalnum
    printf("isalnum(\'%c\') = %d\n", c, isalnum(c));
    
    // isxdigit()
    printf("isxdigit(\'%c\') = %d\n", c, isxdigit(c));
    
    // islower()
    printf("islower(\'%c\') = %d\n", c, islower(c));
    
    // isupper()
    printf("isupper(\'%c\') = %d\n", c, isupper(c));

    // tolower()
    printf("tolower(\'%c\') = %d\n", c, tolower(c));
    
    // toupper()
    printf("toupper(\'%c\') = %d\n", c, toupper(c));
    
    // isspace()
    printf("isspace(\'%c\') = %d\n", c, isspace(c));
    
    // iscntrl()
    printf("iscntrl(\'%c\') = %d\n", c, iscntrl(c));
    
    // ispunct()
    printf("ispunct(\'%c\') = %d\n", c, ispunct(c));
    
    // isprint()
    printf("isprint(\'%c\') = %d\n", c, isprint(c));
    
    // isgraph()
    printf("isgraph(\'%c\') = %d\n", c, isgraph(c));
    }

    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    getchar();
    return;
}
