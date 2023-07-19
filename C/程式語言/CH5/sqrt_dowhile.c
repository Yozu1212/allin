#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double y=0,x=0;
    int i=0;
    do{
      y=sqrt(x);
      printf("sqrt(%.2f)=%.2f\n",x,y);
      x+=10;
    }
    while(x<=100);
    system("pause");
    return 0 ;
}
