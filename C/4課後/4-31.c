//000010000
//000111000


#include <stdio.h>
int main()
{
    int b, i, j;
    
    b=4; //1~4空白 
    
    for (i = 1; i <= 5; i++)   //五行 
    {
        for (j = 1; j <= b; j++)  //跑四個空格 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) //2*(雙邊) I次數擴張 -1 起點值 
            printf("*");
        printf("\n");
        b--; //空格減少 
    }
    b = 1; //從一個空格開始 
    for (i = 1; i <= 4; i++)  //四行 
    {
        for (j = 1; j <= b; j++)
            printf(" ");
        for (j = 1; j <= 2 * (5 - i) - 1; j++)
            printf("*");
        printf("\n");
        b++;
    }
    return 0;
}
