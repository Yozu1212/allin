/* *************** */ 
/*                 */ 
/*       �W        */ 
/*                 */
/* *************** */     
#include<stdio.h> //�зǨ禡�w 
#define SIZE 12  //�]�w�}�C�j�p12

int main (void){ 
//�D�{�����ǭ� 
int a[SIZE]={1,3,5,4,7,2,99,16,45,67,89,45};
//a �}�C���� 
int total =0;
//��l�� total �]0 

for(size_t i=0;i<SIZE;++i){
	//�]i ��0 ��SIZE �C��i+1 
	total += a[i];
	//total= total+a�}�C��i�� 
} 
printf("Total of array element values is %d\n",total);
//�L�X�o�q��+total ���� 
} 
