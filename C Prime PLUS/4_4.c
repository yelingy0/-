/*pizza.c----在披萨饼中使用已定义常量*/
#include<stdio.h>
#define PI 3.14159
int main(void)
{
    float area,circum,radius;
    printf("What's the radius of your pizza?\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circum=2.0*PI*radius;
    printf("Your basic pizza parameters are as follow:\n");
    printf("circumference=%1.2f,area=%1.2f\n",circum,area);    

    return 0;
}
