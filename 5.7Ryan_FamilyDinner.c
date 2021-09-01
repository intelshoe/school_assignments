/* Final Exam: 5.7 Catered Family Dinner

   Ryan Willis
   29 Aug 2021  */

#include <stdio.h>

main()
{
    int aCount, cCount = 0; // calculates adult and child totals
    float charity, cTotal, totalSales = 0;  // holds charity and sales cost values

    printf("Welcome to the Family Dinner Catering Service\n\n");

    printf("Meal Sales for Adults: \n \
Buy 3 meals at $10, and any additional meals for $5.50 \n\n \
\
Meal Sales for Children: \n \
Buy 2 meals at $7.50 and get any additial for only $5. \n \
\n \
How Many adult meals would you like to purchase? ");
    scanf("%d", &aCount); // get total adult meals purchased

    if (aCount > 3) { // begin calculate total cost for adult dinners
        aCount = aCount - 3;
        totalSales = 30.00 + (5.50 * aCount);
        printf("\nCurrent total: $%.2f", totalSales);
    }
    else { //if adult sales less than deal amount of 3
        totalSales = aCount * 10.00;
        printf("\nCurrent total: $%.2f", totalSales);
    }

    printf("\n How many child meals would you like to purchase? ");
    scanf("%d", &cTotal); // get total child meals purchased

    if (cCount > 2) { // begin calculate total cost for child dinners
        cCount = cCount - 2;
        totalSales = totalSales + 15.00 + (5.00 * cCount);
        printf("\nCurrent total: $%.2f", totalSales);
    }
    else { //if sales less than deal amount of 2
        totalSales = totalSales + cCount * 7.50;
        printf("\nCurrent total: $%.2f", totalSales);
    }

    //begin charity input
    printf("\nThank you. How much of a percentage of your meal \n \
would you like to donate to charity?\n");
    scanf("%f", &charity);

    cTotal = (charity * totalSales) / 100; // calculats charity cost

    printf("Thank you. The total cost for the meal will be: $%.2f \n", totalSales);
    printf("The total amount you will donate to charity is: $%.2f \n", cTotal);

    //wait for keypress to exit
    printf("\n\nPress any key to exit.");
    getchar();
    getchar();
    return;
}
