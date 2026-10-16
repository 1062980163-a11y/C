#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    scanf("%d %d",&i,&j);
    scanf("%d %d",&k,&l);
    scanf("%d %d",&m,&n);
    if(i<=m&&m<=k&&j>=n&&n>=l){
        printf("IN");
    }
    else{
        printf("OUT");
    }


}