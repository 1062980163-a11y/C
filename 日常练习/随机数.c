#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int number=rand()%100+1;
int count=0;
int a;
do{scanf("%d",&a);
    count=count+1;
    if(a<number)
    {printf("你输入的数字偏小");}
    else if(a>number){printf("你输入的数字偏大");}
   

}while(a!=number);
printf("你猜了%d次\n",count);
return 0;
}