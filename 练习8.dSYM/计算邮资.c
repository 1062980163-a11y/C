#include<stdio.h>
#define base 8
int main()
{
    int weight,money;
    char c;
    scanf("%d %c",&weight,&c);
    if(weight<=1000){
        money=base;
        if(c=='y'){
            printf("%d",money+5);
        }
        else{
            printf("%d",money);
        }}
    if(weight>1000){
        int extra;
        extra=(((weight-1000)/500)+1)*4;
        money=base+extra;
        if(c=='y'){
            printf("%d",money+5);
        }
        else{
            printf("%d",money);
        }}}



    
