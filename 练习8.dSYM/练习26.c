#include<stdio.h>
int main()
{
     int i,j,k;
     int count=0;
     for(i=2;i<=5;i++){
        for(j=2;j<=5;j++){
            for(k=2;k<=5;k++){
                if(i!=j&&i!=k&&j!=k){
                    printf("%d%d%d",i,j,k);
                    count++;
                    if(count%6!=0){
                        printf(" ");
                    }
                    if(count%6==0){
                        printf("\n");
                    }
                }
            }
        }
     }



}