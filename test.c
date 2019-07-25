#include <stdio.h>

const int MAX = 3;

int main()
{
   int var[] = {10, 100, 200};
   int i, *ptr;

   /*指针递增 */
   ptr = var;
   for (i = 0; i < MAX; i++)
   {
      /* code */
      printf("var[%d]的地址：%x\n", i, ptr);
      printf("var[%d]的值：%d\n", i, *ptr);
      ptr++;
   }

   printf("-----------------------------------\n");

   /*指针递减*/
   ptr = &var[MAX - 1];
   for (i = MAX; i > 0; i--)
   {
      /* code */
      printf("var[%d]的地址：%x\n", i - 1, ptr);
      printf("var[%d]的值：%d\n", i - 1, *ptr);
   }

   printf("-----------------------------------\n");

   /*指针比较 */
   ptr = var;
   while (ptr <= &var[MAX - 1])
   {
      printf("var[%d]的地址：%x\n", i, ptr);
      printf("var[%d]的值：%d\n", i, *ptr);
      ptr++;
      i++;
   }

   return 0;
}