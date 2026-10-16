#include<stdio.h>
#include<math.h>
#define bottom 10
int power(int base,int N)
{
    int res=1;
    for(int a=1;a<=N;a++){//N=3,要得到begin=100，一开始a=1，小于3，进去循环，res=10，a=2，进循环，res=100,a=3
        res=res*base;//假如n=3
    }return res;
}
int main()
{
    int begin,N;
    scanf("%d",&N);
    begin=power(bottom,N-1);
    int res=power(bottom,N);
    for(begin;begin<(res-1);begin++){
           int alt=begin;
            int box[7]={0,0,0,0,0,0,0};
            int i=0;
            int a;
            int sum=0;
            do{
                a=alt%10;
                alt=alt/10;
                box[i]=a;//if 比如alt=12--a=2--alt=1--a=1--
                i++;
            }while(alt!=0);
            for(int j=0;j<N;j++){//box[0]记录的值个位，box[1]记录十位
                                //我要验证box[0]的N次方+box[1]的N次方+box[2]的N次方+box[3]的N次方
                sum=sum+power(box[j],N);
            }if(sum==begin){
                printf("%d\n",sum);
            } 
            }
        }
        
    


