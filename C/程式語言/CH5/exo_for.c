#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    int i=0;
    for(i=0;x<=5;x+=0.1)
    {
      y=exp(x);
      printf("exp(%.2f)=%.2f\n",x,y);
    }
    system("pause");
    return 0 ;
}
