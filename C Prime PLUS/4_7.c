/*width.c---字段宽度*/
#include<stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);//小于3，结果会自动调整为适合的字段宽度
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);//-代表在左侧

    return 0;
}
