#include<stdio.h>
int main()
{
    printf("请分别输入长方体的长宽高：");
int a;
int b;
int c;
scanf("%d%d%d",&a,&b,&c);
printf("V=%d\n",a*b*c);
printf("S=%d\n",2*a*b+2*a*c+2*b*c);
return 0;

}