#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
    float money;
    float get;
    while(money != -1)
	{
    printf("�o�g��F�h�ֿ�(��J-1�Y����):");
    scanf("%f",&money);
	if(money == -1)
	{
		break;
	}
	get= 200 + (money * 0.09);
	printf("�o�g���J�O:%.2f\n", get);
	}
system("PAUSE");
return 0;
}
