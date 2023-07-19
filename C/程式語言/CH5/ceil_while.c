#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    while(x<=5)
    {
      y=ceil(x);
      printf("ceil(%.2f)=%.2f\n",x,y);
      x+=0.1;
    }
    system("pause");
    return 0 ;
}
