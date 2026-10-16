#include<stdio.h>
void sum(int begin,int end);
int main(){
    sum(10,20);
}
void sum(int begin,int end){
    int sum=0;
    for(;begin<=end;begin++){
        sum=sum+begin;
    }
    printf("%d\n",sum);
}