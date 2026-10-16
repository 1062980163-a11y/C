#include<stdio.h>
int main()
{
int m,n;
int count=0;
int sum=0;
scanf("%d %d",&m,&n);
int i=m;
for(i;i<=n;i++){
    int a=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            a=1;
            break;
        }
    }
    if(a==0){
        count++;
        sum=sum+i;
    }



}printf("%d %d\n",count,sum);
}