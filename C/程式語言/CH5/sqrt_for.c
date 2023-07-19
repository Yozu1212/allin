#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    int i=0;
    for(i=0;x<=100;x+=10)
    {
      y=sqrt(x);
      printf("sqrt(%.2f)=%.2f\n",x,y);
    }
    system("pause");
    return 0 ;
}
