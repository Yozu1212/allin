#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    int i=0;
    while(x<=5)
    {
      y=exp(x);
      printf("exp(%.2f)=%.2f\n",x,y);
      x+=0.1;
    }
    system("pause");
    return 0 ;
}
