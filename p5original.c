#include<stdio.h>

int input()
{
  int a;
  printf("Enter the number:\n");
  scanf("%d",&a);
  return a;
}

int gcd(int a,int b)
{
  int r;
  for(int i=1;i<=a && i<=b;i++)
    {
     if(a%i==0 && b%i==0)
     r=i;
    }
  return r;
}

void output(int a,int b,int hcf)
{
  printf("The gcd of %d and %d is %d\n",a,b,hcf);
}

int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}
