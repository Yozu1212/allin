#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    int i=0;
    do{
      y=exp(x);
      printf("exp(%.2f)=%.2f\n",x,y);
      x+=0.1;
    }
    while(x<=5);
    system("pause");
    return 0 ;
}
