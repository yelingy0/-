#include<stdio.h>
int main()
{
    int x=100;

    printf("dec=%d;cotal=%o;hex=%x.\n",x,x,x);
    printf("dec=%d;cotal=%#o;hex=%#x.\n",x,x,x);

    return 0;
}