//000010000
//000111000


#include <stdio.h>
int main()
{
    int b, i, j;
    
    b=4; //1~4�ť� 
    
    for (i = 1; i <= 5; i++)   //���� 
    {
        for (j = 1; j <= b; j++)  //�]�|�ӪŮ� 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) //2*(����) I�����X�i -1 �_�I�� 
            printf("*");
        printf("\n");
        b--; //�Ů��� 
    }
    b = 1; //�q�@�ӪŮ�}�l 
    for (i = 1; i <= 4; i++)  //�|�� 
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
