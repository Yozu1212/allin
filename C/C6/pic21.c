//�W /// 
#include<stdio.h> //�зǨ禡�w 

void printArray(int a[][3]);
//�]�w printArray�禡 ���^��  a �}�C�� �۰�[]�̭��]�T�Ӫ��G���}�C 

int main (void){ 
//�D�{�����ǭ� 

int array1[2][3]={{1,2,3},{4,5,6}};
puts("Values in array1 by row are:");
printArray(array1);
// �]�w�G���}�C 1 �L�X��r �ǤJprintArray�禡 

int array2[2][3]={1,2,3,4,5}; //�Ĥ@�ե���3�� �ĤG�զ��T�� ���O�u����� �ҥH�ĤT�Ӭ�0 
puts("Values in array2 by row are:");
printArray(array2);
// �]�w�@���}�C 2 �L�X��r �ǤJprintArray�禡

int array3[2][3]={{1,2},{4}}; //�Ĥ@�զ��T�� 12 �S���T��0  
puts("Values in array3 by row are:");
printArray(array3);
// �]�w�G���}�C 3 ���O����3�ӭ� �L�X��r �ǤJprintArray�禡
}
void printArray(int a[][3]){
//�]�w  printArray�禡
for(size_t i = 0; i <=1;++i){ 
	//�]i ��0 i��1 �C��i+1  0,1 ��� 
	for(size_t j = 0; j <= 2;++j){ 
	//�]i ��0 j��2 �C��i+1 0,1,2�T�� 
 printf("%d ",a[i][j]); //�p�G�S�F�� ��0 
}
printf("\n");
}
}


