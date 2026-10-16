#include<stdio.h>
int main()
{
int N;
scanf("%d",&N);
        for(int j=1;j<=N;j++){//i=1,j=2...j=3
            int i=1;
            if(i*j>=10){
                printf("%d*%d=%d   ",i,j,i*j);
            }
            if(i*j<10){
                printf("%d*%d=%d    ",i,j,i*j);
            }
            while(i!=j){
            i++;//i=2
            if(i*j>=10){
                printf("%d*%d=%d   ",i,j,i*j);
            }
            if(i*j<10){
                printf("%d*%d=%d    ",i,j,i*j);
            }
        }
            if(i==j){
                printf("\n");
        }
        }
        
    }
    







