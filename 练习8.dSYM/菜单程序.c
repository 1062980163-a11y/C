#include<stdlib.h>
#include<stdio.h>
int main()
{
printf("Menu:A(dd) D(elete) S(ort) Q(uit),select one:");
char choice;
scanf("%c",&choice);
if(choice=='A'){
    printf("data is added\n");
}
else if(choice=='D'){
    printf("data is deleted\n");
}
else if(choice=='S'){
    printf("data is sorted\n");
}
else if(choice=='Q'){
    exit(0);
}







}