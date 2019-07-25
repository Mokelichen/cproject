/*企业发放的奖金根据利润提成。

1.利润(I)低于或等于10万元时，奖金可提10%；
2.利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
3.20万到40万之间时，高于20万元的部分，可提成5%；
4.40万到60万之间时高于40万元的部分，可提成3%；
5.60万到100万之间时，高于60万元的部分，可提成1.5%；
6.高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？
 */
#include <stdio.h>

int main()
{
    double I, bouns, bouns1, bouns2, bouns4, bouns6, bouns10;
    printf("请输入您的利润：");
    scanf("%lf", &I);

    bouns1 = 100000 * 0.1;
    bouns2 = bouns1 + 100000 * 0.075;
    bouns4 = bouns2 + 200000 * 0.05;
    bouns6 = bouns4 + 400000 * 0.03;
    bouns10 = bouns6 + 600000 * 1.5;

    if (I <= 100000)
    {
        bouns = I * 0.1;
    }
    else if (I > 100000 && I <= 200000)
    {
        bouns = bouns1 + (I - 100000) * 0.075;
    }
    else if (I > 200000 && I < 400000)
    {
        bouns = bouns2 + (I - 200000) * 0.05;
    }
    else if (I > 400000 && I < 600000)
    {
        bouns = bouns4 + (I - 400000) * 0.03;
    }
    else if (I > 600000 && I < 1000000)
    {
        bouns = bouns6 + (I - 600000) * 0.015;
    }
    else if (I > 1000000)
    {
        bouns = bouns10 + (I - 1000000) * 0.01;
    }

    printf("您的奖金为：%lf", bouns);
    return 0;
}