#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count[10]={0};
    while(n!=-1){
        if(n>=0&&n<=9){
            count[n]++;
        }
        scanf("%d",&n);
    }for(int i=0;i<=9;i++){
        printf("数字%d出现了%d次",i,count[i]);
    }
}