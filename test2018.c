#include <stdio.h>

const int MAX = 3;

int main()
{
    int d, n, count = 1, Sn = 0, Tn = 0;
    printf("������ d �� n ��ֵ:\n");
    scanf("%d,%d", &d, &n);
    while (count<=n)

    {
        Tn = Tn + d;
        Sn = Sn + Tn;
        d=d*10;
        count++;
    }
    printf("d+dd+ddd+...=%d\n", Sn);

    return 0;
}