#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=2,x=0,z;
    do{
      z=fmod(y,x);
      printf("fmod(%.2f,%.2f)=%.2f\n",y,x,z);
      x+=0.1;
    }
    while(x<=5);
    system("pause");
    return 0 ;
}
