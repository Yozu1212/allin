#include<stdio.h> //�зǨ禡�w 
#define SIZE 10  //�]�w�}�j�p10 

int main (void){ 
//�D�{�����ǭ� 
int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
//a �}�C���� 
puts("Data items in original order");
//�L�X�o�y�ܴ��� 
for(size_t i = 0; i < SIZE;++i){ 
	//�]i ��0 i��SIZE �C��i+1 
   printf("%4d",a[i]) ;
//�L�X �j4 a�}�C��i����
}
for(unsigned int pass = 1; pass < SIZE;++pass){ 
	//�] pass������ƭ�1 pass�� SIZE �C��pass+1 

 for(size_t i = 0; i < SIZE;++i){ 
//�]i ��0 i��SIZE �C��i+1 
	if(a[i]>a[i+1]){
		//�p�G a�}�C��e�Ȥj��U�@�ӭȰ���
		int hold = a[i];
		a[i] = a[i+1];
		a[i+1] = hold;
		// �O����̤p������L�X 
		//ex : 6>4 (�G�T��)  ��e�O��(6) ����e����U�@��(4) �U�@��O��(4) �~�򩹫���(4) 
	}
}
}
puts("\nData item in ascending order");
// �L�X�o�y�� 
for(size_t i = 0; i < SIZE;++i){ 
	//�]i ��0 i��SIZE �C��i+1 
printf("%4d",a[i]);
//��4�Ӧr�� �L�X a�}�C i�� 
}
puts("");//���� 
}

 
   
   
