#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ID;
	float money;
	float year;
	float rate;
	float pay;
	while(ID != -1)
	{
	printf("�п�J�b��(��J-1�Y����):");
	scanf("%d",&ID);
	if(ID == -1)
	{
		break;
	}
	printf("��J�����B(�ά������):");
	scanf("%f",&money);
	printf("��J������(�Φ~���):");
	scanf("%f",&year);
	printf("��J�Q�v(�Τp�ƪ��):");
	scanf("%f",&rate);
	pay=((money*rate*year)+money)/(12*year);
	printf("�C��ݤ�I%.0f\n",pay);
	}
	system("PAUSE");
	return 0;
}
