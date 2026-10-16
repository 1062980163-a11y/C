#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
double delta=((b*b)-4.0*a*c);
if(a==0&&b==0&&c==0){
    printf("inf");
}
else if(a==0&&b==0){
    printf("wa");
}
else if(a==0){
    printf("1 ");
    printf("%.2lf",(-c)*1.0/b);
}
else if(delta<0){
    printf("wa");
}
else if(delta==0){
    printf("1 ");
    double x=(-b)/(2.0*a);
    printf("%.2lf",x);
}
else if(delta>0){
    printf("2 ");
    double xone=((-b)+sqrt(delta))/(2.0*a);
    double xtwo=((-b)-sqrt(delta))/(2.0*a);
    double max=xone>xtwo?xone:xtwo;
    double min=xone<xtwo?xone:xtwo;
    printf("%.2lf %.2lf",min,max);
}

}