//输入三个整数x,y,z，请把这三个数由小到大输出。
#include <stdio.h>

int main()
{
    int x, y, z, t;
    printf("请输入xyz的值：");
    scanf("%d,%d,%d", &x, &y, &z);

    if (x > y) //如果x>y,交换x，y的位置
    {
        t = x;
        x = y;
        y = t;
    }
    if (x > z) //如果x>z,交换x，z的位置
    {
        t = x;
        x = z;
        z = t;
    }

    if (y > z) //如果y>z,交换y，z的位置
    {
        t = y;
        y = z;
        z = t;
    }
    printf("%d%d%d\n",x,y,z);
    return 0;
}