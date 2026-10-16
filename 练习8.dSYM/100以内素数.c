#include<stdio.h>
int main()
{
    printf("2\n");

for(int i=3;i<=100;i++){
    int b=0;
    for(int count=2;count<i;count++){
        if(i%count==0){
            b=1;
            break;
        }
    }if(b==0){
        printf("%d\n",i);
    }
}








}