#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0.1;
    while(x<=5)
    {
      y=log10(x);
      printf("log10(%.2f)=%.2f\n",x,y);
      x+=0.1;
    }
    system("pause");
    return 0 ;
}
