#include<stdio.h>
int main()
{ int r;
  int g;
  int b;
  scanf("%X %X %X",&r,&g,&b);
  printf("%02X%02X%02X",255-r,255-g,255-b);
  return 0;


}