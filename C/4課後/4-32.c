//000010000
//000111000


#include <stdio.h>
int main()
{
    int b=0, i, j,x=0;
    
     printf("��J�@��1~19���_��:");
      scanf ("%d",&x);
     if(x%2==0) {
     	     printf("�o�O����");
	 }else{
	 
   
    b=x-1; //1~(X-1)�ť� 
    
    for (i = 1; i <= x; i++)   //��X�� 
    {
        for (j = 1; j <= b; j++)  //�]X-1�ӪŮ� 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) //2*(����) I�����X�i -1 �_�I�� 
            printf("*");
        printf("\n");
        b--; //�Ů��� 
    }
    b = 1; //�q�@�ӪŮ�}�l 
    for (i = 1; i <= x-1; i++)  //�|�� 
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
