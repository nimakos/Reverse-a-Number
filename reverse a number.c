#include <stdio.h>

int main()
{
   int n, reverse = 0;
   printf("Enter a nber to reverse\n");
   scanf("%d", &n);

   while (n != 0)
   {

      reverse = reverse * 10 + n%10;
            n = n/10;
   }

   printf("Reverse of entered nber is = %d\n", reverse);

   return 0;
}
