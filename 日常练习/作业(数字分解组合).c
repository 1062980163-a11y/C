#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
int b=a/100;//baiwei
int c=a/10%10;//shiwei
int d=a%10;//gewei
int e=d*100+c*10+b;
printf("%d\n",e);
return 0;



}