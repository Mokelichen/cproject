/**
 * ð������Ӣ�Bubble Sort����һ�ּ򵥵������㷨�����ظ����߷ù�Ҫ��������У�һ�αȽ�����Ԫ�أ�������ǵ�˳����Ӵ�С������ĸ��A��Z������Ͱ����ǽ���������
 */

#include <stdio.h>

void BubbleSort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = sizeof(arr) / sizeof(*arr);
    printf("����arr[]�ĳ����ǣ�%d\n", len);
    BubbleSort(arr, len);
    int i;
    printf("ð�������");
    for (i = 0; i < len; i++)
    {
        printf("%d  ", arr[i]);
    }
    getchar();
    return 0;
}