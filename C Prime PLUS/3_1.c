#include<stdio.h>
int main(void)
{
    float weight;
    float value;
    printf("Are you worth you weight in platinmu?\n");
    printf("Let's check it out\n");
    printf("Please enter your weight in pounds:");

    //获取输入
    scanf("%f",&weight);
    getchar();
    getchar();

    value=1700.0*weight*14.5833;
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth taht!If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}