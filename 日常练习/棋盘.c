#include<stdio.h>
#define size 3
int main(){
    int board[size][size];
    int i,j;
    int numx=0,numo=0;
    for(;i<size;i++){
        for(;j<size;j++){
            scanf("%d",&board[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        numo=0,numx=0;
        for(int j=0;j<size;j++){
            if(board[i][j]==1){
                numx++;
            }
            else{
                numo++;
            }
        }
        if(numx==size){
        printf("1");
    }
    else if(numo==size){
        printf("0");
    }
    }
    for(int i=0;i<size;i++){
        numx=0;
        numo=0;
        for(int j=0;j<size;j++){
            if(board[j][i]==1){
                numx++;
            }
            else{
                numo++;
            }
        }
        if(numx==size){
                printf("1");
            }
            else if(numo==size){
                printf("0");
            }
    }
    int a=0,b=0;
    while(a<size&&b<size){
        if(board[a][b]==1){
            numx++;
        }
        else if(board[a][b]==0){
            numo++;
        }
        a++;
        b++;
    }
    if(numx==size){
        printf("1");
    }
    else if(numo==size){
        printf("0");
    }
}