#include<stdio.h>
int main()
{
   int i,j,k;//231
   scanf("%d %d %d",&i,&j,&k);
   int a=i>j?i:j;
   int b=i<j?i:j;
   if(a==a>k?a:k){
    int middle=b>k?b:k;
    int last=b<k?b:k;
    printf("%d %d %d ",last,middle,a);
   }
   else if(k==a>k?a:k){
    printf("%d %d %d ",b,a,k);
   }
   

}