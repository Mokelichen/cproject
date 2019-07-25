//输入某年某月某日，判断这一天是这一年的第几天？
/*
    思路：month的天数加上day的数
    
 */
#include <stdio.h>

int main()
{
    int year, month, day, sum, temp;
    printf("请输入年月日：");
    scanf("%d,%d,%d", &year, &month, &day);
    switch (month)
    {
    case 1:
        sum = 0;
        break;
    case 2:
        sum = 31;
        break;
    case 3:
        sum = 59;
        break;
    case 4:
        sum = 90;
        break;
    case 5:
        sum = 120;
        break;
    case 6:
        sum = 150;
        break;
    case 7:
        sum = 181;
        break;
    case 8:
        sum = 212;
        break;
    case 9:
        sum = 243;
        break;
    case 10:
        sum = 273;
        break;
    case 11:
        sum = 304;
        break;
    case 12:
        sum = 334;
        break;
    default:
        printf("輸入錯誤！");
        break;
    }
    sum = sum + day;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        temp = 1;
    }
    else
    {
        temp = 0;
    }

    if (temp == 1)
        sum++;
    printf("这是这一年的第 %d 天\n",sum);

    return 0;
}