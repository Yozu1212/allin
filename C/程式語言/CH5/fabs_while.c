#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=-2;
    while(x<=5)
    {
      y=fabs(x);
      printf("fabs(%.2f)=%.2f\n",x,y);
      x+=0.1;
    }
    system("pause");
    return 0 ;
}
