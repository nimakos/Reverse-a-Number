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
   /*
n = 4562
reverse = 0

reverse = reverse *10 + n%10 = 0 + 2 = 2
n = n/10 = 456

reverse = reverse *10 + n%10 = 20 + 6 = 26
n = n/10 = 45

reverse = reverse *10 + n%10 = 260 + 5 = 265
n = n/10 = 4

reverse = reverse *10 + n%10 = 2650 + 4 = 2654
n = n/10 = 0
  */

   printf("Reverse of entered nber is = %d\n", reverse);

   return 0;
}
