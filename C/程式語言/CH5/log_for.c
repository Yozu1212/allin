#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0.1;
    for(x=0.1;x<=5;x+=0.1)
    {
      y=log(x);
      printf("log(%.2f)=%.2f\n",x,y);
    }
    system("pause");
    return 0 ;
}
