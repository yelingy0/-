/*showf_pt --以两种方式显示float 的值*/
#include <stdio.h>
int main(void)
{
    float aboat=32000.0;
    double abet=2.14e9;
    long double dip= 5.32e-5;//可能有错

    printf("%f can be written %e\n",aboat,aboat);
    printf("And it's %a in hexadecimal,powers of 2 notations\n",aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);

    return 0;
}