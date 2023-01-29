//defines.c-----使用limits.h 和float.h 头文件中定义的明示变量
#include<stdio.h>
#include<float.h>  //浮点型限制
#include<limits.h> //整形限制
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n",INT_MAX);
    printf("Smallest long long: %lld\n",LLONG_MIN);
    printf("One byte= %d bits on this system.\n",CHAR_BIT);
    printf("Largest double: %e\n",DBL_MAX);
    printf("Smallest normal float: %e\n",FLT_MIN);
    printf("Float precision: %e\n",FLT_DIG);
    printf("Float epsilon = %e\n",FLT_EPSILON);

    return 0;
}