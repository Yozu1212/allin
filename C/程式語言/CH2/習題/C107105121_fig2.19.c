#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  int b;
  int c;
  
  printf("Enter three different integers:\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  printf("Sum is %d\n",a+b+c);
  printf("Average is %d\n",(a+b+c)/3);
  printf("Product is %d\n",a*b*c);
  
  if(a<b&&a<c)
  {
       printf("Smallest is %d\n",a);
  }
  if(b<a&&b<c)
  {
       printf("Smallest is %d\n",b);
  }
  if(c<a&&c<b)
  {
       printf("Smallest is %d\n",c);
  }
  
  if(a>b&&a>c)
  {
       printf("Largest is %d\n",a);
  }
  if(b>a&&b>c)
  {
       printf("Largest is %d\n",b);
  }
  if(c>a&&c>b)
  {
       printf("Largest is %d\n",c);
  }
  system("PAUSE");	
  return 0;
}

