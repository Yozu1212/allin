//000010000
//000111000


#include <stdio.h>
int main()
{
    int b=0, i, j,x=0;
    
     printf("块1~19计:");
      scanf ("%d",&x);
     if(x%2==0) {
     	     printf("硂琌案计");
	 }else{
	 
   
    b=x-1; //1~(X-1)フ 
    
    for (i = 1; i <= x; i++)   //きX︽ 
    {
        for (j = 1; j <= b; j++)  //禲X-1 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) //2*(蛮娩) IΩ计耎眎 -1 癬翴 
            printf("*");
        printf("\n");
        b--; //搭ぶ 
    }
    b = 1; //眖秨﹍ 
    for (i = 1; i <= x-1; i++)  //︽ 
    {
        for (j = 1; j <= b; j++)
            printf(" ");
        for (j = 1; j <= 2 * (x - i) - 1; j++)
            printf("*");
        printf("\n");
        b++;
    }
}
    return 0;
}
