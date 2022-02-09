#include <stdio.h>

int input_number()
{
  int n;
  printf("enter the number you want to check\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  int composite=0;
  int i;
 for(i=1; i<=n; i++)
  {
  if(n % i == 0)
   {
    composite++;
   }
  }
  return composite;
}

void output(int n, int composite)
{
 if(composite > 2)
  printf("%d is a composite number", n);
 else
  printf("%d is not a composite number", n);
}

int main()
{
  int n,c;
  n=input_number();
  c=is_composite(n);
  output(n,c);
  return 0;
}