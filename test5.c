//������������x,y,z���������������С���������
#include <stdio.h>

int main()
{
    int x, y, z, t;
    printf("������xyz��ֵ��");
    scanf("%d,%d,%d", &x, &y, &z);

    if (x > y) //���x>y,����x��y��λ��
    {
        t = x;
        x = y;
        y = t;
    }
    if (x > z) //���x>z,����x��z��λ��
    {
        t = x;
        x = z;
        z = t;
    }

    if (y > z) //���y>z,����y��z��λ��
    {
        t = y;
        y = z;
        z = t;
    }
    printf("%d%d%d\n",x,y,z);
    return 0;
}