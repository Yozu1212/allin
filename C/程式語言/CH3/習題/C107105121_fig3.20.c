#include<stdio.h>
#include<stdlib.h>

int main (int arge,char *argv[]) 
{
	float hour;
	float rate;
	while(hour != -1){
		printf("�o�g�u�@�`�ɼ�(��J-1�Y����):");
		scanf("%f",&hour);
		if(hour == -1)
		{
			break;
		}
		printf("�C�p�ɪ��u��:");
		scanf("%f",&rate);
		if(hour <= 40)
		{
			printf("�o�g�u��%.2f��",hour * rate);
		}
		else
		{
			printf("�o�g�u��%.2f��\n",(rate*hour)+((hour-40)*(0.5*rate)));
		}
	}
	
	system("PAUSE");
	return 0;
}
