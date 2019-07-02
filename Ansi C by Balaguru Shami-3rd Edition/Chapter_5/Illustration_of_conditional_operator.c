/*

Program Name: Illustration of conditional operator.

Author:Abdullah Almasud.

*/
#define MAXLOAN 50000
main()
{
   long int loan1, loan2, loan3, sancloan, sum23;

   printf("Enter the values of previous two loans:\n");
   scanf("%ld %ld", &loan1, &loan2);

   printf("Enter the values of new loan:\n");
   scanf("%ld", &loan3);

   sum23 = loan2 + loan3;

   sancloan = (loan1 > 0) ? 0 : ((sum23 > MAXLOAN) ? MAXLOAN - loan2 : loan3);

   printf("\n");
   printf("\nPrevious loans pending:\n%ld %ld", loan1, loan2);
   printf("\nLoan requested:\n%ld", loan3);
   printf("\nLoan sanctioned:\n%ld", sancloan);
   printf("\n");
}
