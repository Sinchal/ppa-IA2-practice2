#include<stdio.h>

int input_side()
{
  int a;
  printf("enter the side of triangle\n");
  scanf("%d",&a);
  return a;
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
 a= input_side();
 b= input_side();
 c= input_side();
 isscalene=check_scalene(a,b,c);
 output(a,b,c,isscalene);
 return 0;
}