#include<stdio.h>
int  main()
{
    int ten=10;
    int two=2;
    printf("Doing that is right:");
    printf("%d minus %d is %d \n",ten,2,ten-two);
    printf("Doing that is wrong:");
    printf("%d minus %d is %d\n",ten);//遗漏两个值

    return 0;
}