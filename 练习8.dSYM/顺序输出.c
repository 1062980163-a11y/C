#include<stdio.h>
#include<math.h>
int main(){
       int input;
       int a;
       int count=0;//输入23，a=23，a/10=2,
       int b;
       scanf("%d",&input);
       a=input;
       while(a>10){
        a=a/10;
        count++;
       };
//printf("input=%d,count=%d",input,count);
       int mask=(int)pow(10,count);
       //printf("%d",mask);
       //输入2345
       //2345/1000=2
       //2345%1000=345
       //1000/10=100
       //345/100=3,
       do{
              b=input/mask;//if input=34,mask=10--b=3--input=4,mask=1--b=4--input=0,mask=0
              printf("%d",b);
              if(mask>1){
                     printf(" ");}
              input=input%mask;//input=345
              mask=mask/10;//mask=100
              }while(mask>0);



}