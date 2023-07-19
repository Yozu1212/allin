#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    for(x=0;x<=5;x+=0.1)
    {
      y=ceil(x);
      printf("ceil(%.2f)=%.2f\n",x,y);
    }
    system("pause");
    return 0 ;
}
