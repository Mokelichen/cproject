#include <stdio.h>

const int MAX = 3;

int main()
{
   int var[] = {10, 100, 200};
   int i, *ptr;

   /*ָ����� */
   ptr = var;
   for (i = 0; i < MAX; i++)
   {
      /* code */
      printf("var[%d]�ĵ�ַ��%x\n", i, ptr);
      printf("var[%d]��ֵ��%d\n", i, *ptr);
      ptr++;
   }

   printf("-----------------------------------\n");

   /*ָ��ݼ�*/
   ptr = &var[MAX - 1];
   for (i = MAX; i > 0; i--)
   {
      /* code */
      printf("var[%d]�ĵ�ַ��%x\n", i - 1, ptr);
      printf("var[%d]��ֵ��%d\n", i - 1, *ptr);
   }

   printf("-----------------------------------\n");

   /*ָ��Ƚ� */
   ptr = var;
   while (ptr <= &var[MAX - 1])
   {
      printf("var[%d]�ĵ�ַ��%x\n", i, ptr);
      printf("var[%d]��ֵ��%d\n", i, *ptr);
      ptr++;
      i++;
   }

   return 0;
}