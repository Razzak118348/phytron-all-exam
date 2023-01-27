#include <stdio.h>
#include <string.h>
int main()
{
   int i, j, n;
   scanf("%d ", &n);
   for (int i = 0,j=n-1; i < n;j--, i++)
   {
      char st[21];
      scanf("%s", &st);

      int l = strlen(st);
      int count = 0;
      for (int i = 0; i < l; i++)
      {
         if (st[i] == st[l - i - 1])
         {
            count = 0;
         }
         else
         {
            count++;
            break;
         }
      }

      if (count != 0)
      {
         if (j == 0)
         {
            printf("Case #%d: Not Palindrome\n", 1);
         }
         else
            printf("Case #%d: Not Palindrome\n", j);
      }
      else
      {
         if (l > 7)
         {
            if (j == 0)
            {
               printf("Case #%d: %c%d%c\n", 1, st[0], l - 2, st[l - 1]);
            }
            else
               printf("Case #%d: %c%d%c\n", j, st[0], l - 2, st[l - 1]);
         }
         else
         {
            if (j == 0)
            {
               printf("Case #%d: %s\n", 1, st);
            }
            else
               printf("Case #%d: %s\n", j, st);
         }
      }
   }
}
