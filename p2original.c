#include<stdio.h>

int input_side()
{
  int a, b, c;
  printf("enter sides of triangle");
  scanf("%d%d%d",&a,&b,&c);
  return 
}

int check_scalene(int a, int b, int c)
{
  int isscalene;
  if (a==b && b==c && a==c)
  {
    isscalene=1;
  }
 return isscalene;  
}

