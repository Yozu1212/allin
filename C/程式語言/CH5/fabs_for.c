#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=-2;
    for(x=-2;x<=5;x+=0.1)
    {
      y=fabs(x);
      printf("fabs(%.2f)=%.2f\n",x,y);
    }
    system("pause");
    return 0 ;
}
