//000010000
//000111000


#include <stdio.h>
int main()
{
    int b=0, i, j,x=0;
    
     printf("輸入一個1~19的奇數:");
      scanf ("%d",&x);
     if(x%2==0) {
     	     printf("這是偶數");
	 }else{
	 
   
    b=x-1; //1~(X-1)空白 
    
    for (i = 1; i <= x; i++)   //五X行 
    {
        for (j = 1; j <= b; j++)  //跑X-1個空格 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) //2*(雙邊) I次數擴張 -1 起點值 
            printf("*");
        printf("\n");
        b--; //空格減少 
    }
    b = 1; //從一個空格開始 
    for (i = 1; i <= x-1; i++)  //四行 
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
