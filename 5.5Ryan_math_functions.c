/* Final Exam: 5.7 Catered Family Dinner
   
   Ryan Willis
   29 Aug 2021  */

#include <stdio.h>

main()
{
      int aCount, cCount; // calculates adult and child totals
      float charity, cTotal, totalSales;  // holds charity and sales cost values
      
      printf("Welcome to the Family Dinner Catering Service\n\n");
      
      printf("Meal Sales for Adults: \n \
Buy 3 meals at $10, and any additional meals for $5.50 \n\n \
\
Meal Sales for Children: \n \
Buy 2 meals at $7.50 and get any additial for only $5. \n \
\n \
How Many adult meals would you like to purchase? ");
      scanf("%d", aCount);
      
      if(aCount > 3) { // begin calculate total cost for adult dinners
                aCount = aCount - 3;
                totalSales = 30.00 + (5.50 * aCount);
                printf("\nCurrent total: &%d", totalSales);
                }
      else { //if adult sales less than deal amount of 3
           totalSales = aCount * 10.00
           printf("\nCurrent total: $%d", totalSales;
           }
      
      printf("\n How many child meals would you like to purchase?");
      
      
      //wait for keypress to exit
      printf("\n\nPress any key to exit.");
      getchar();
      return;
}
