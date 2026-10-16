#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i=2;
    int j=1;
    int count=0;
    double sum=0;
    int fenzi=i;
    int fenmu=j;
    do{
        sum=sum+1.0*fenzi/fenmu;
        i=fenzi;
        j=fenmu;
        fenzi=i+j;
        fenmu=i;
        count++;
    }while(count<N);
    printf("%.2lf",sum);



}