#include<stdio.h>
int main(){
    int box[101];
    int i,a;
    int b=1;
    for(i=2;i<=100;i++){
        box[i]=1;
    }
    for(i=2;i<=100;i++){
        if(box[i]==1){//3进来，box[3]==1,进循环，b=6,box[6]=0;
            for(a=2;a*i<=100;a++){
                //b=i*a;
                box[a*i]=0;//box[4,6,8...100]=0
            }
        }
    }
    for(i=2;i<=100;i++){
        if(box[i]==1){
            printf("%d\n",i);
        }
    }



}
