/*有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？ */
#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            for (int k = 1; k < 5; k++)
            {
                if(i!=j&&j!=k&&k!=i)
                {
                    printf("这个数字是：%d%d%d\n",i,j,k);
                }
            }
        }
        
    }
    
    return 0;
}