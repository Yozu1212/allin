#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=2,x=0,z;
    while(x<=5)
    {
      z=pow(y,x);
      printf("pow(%.2f,%.2f)=%.2f\n",y,x,z);
      x+=0.1;
    }
    system("pause");
    return 0 ;
}
