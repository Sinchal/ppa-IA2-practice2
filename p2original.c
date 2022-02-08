#include<stdio.h>

void input_side(int *a, int *b, int *c)
{
  printf("enter sides of triangle\n");
  scanf("%d%d%d",a,b,c);
}

int check_scalene(int a, int b, int c)
{
 int isscalene;
 if (a!=b && b!=c && a!=c)
 {
   isscalene=1;
 }
 return isscalene;  
}

void output(int a, int b, int c, int isscalene)
{
 if (isscalene==1)
 {
   printf("triangle is scalene\n");
 }
 else
 {
   printf("the triangle is equilateral or isoceles\n");
 }
}

int main()
{
 int a,b,c,isscalene;
 input_side(&a,&b,&c);
 isscalene=check_scalene(a,b,c);
 output(a,b,c,isscalene);
 return 0;
}