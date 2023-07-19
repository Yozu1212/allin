#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=2,x=0,z;
    for(x=0;x<=5;x+=0.1)
    {
      z=fmod(y,x);
      printf("fmod(%.2f,%.2f)=%.2f\n",y,x,z);
    }
    system("pause");
    return 0 ;
}
