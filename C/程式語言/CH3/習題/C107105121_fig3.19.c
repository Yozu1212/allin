#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	float pri;
	float rate;
	float day;
	float get;
	while(pri != -1)
	{
		printf("�п�J��J����(��J-1�Y����):");
		scanf("%f",&pri);
		if(pri ==-1)
		{
			break;
		}
		printf("�п�J�Q�v");
		scanf("%f",&rate);
		printf("�п�J�s��Ѽ�");
		scanf("%f",&day);
		get=(pri * rate * day)/365;
		printf("�i�o��%.2f\n",get);
	}
	system("PAUSE");
	return 0;
}
