#include<stdio.h> //�зǨ禡�w 
#define SIZE 5  //�]�w�}�C�j�p5

int main (void){ 
//�D�{�����ǭ� 
int n[SIZE]={19,3,15,7,11};
//n �}�C���� 
printf("%s%13s%17s\n","Element","Value","Histogram") ;
//�I�s�᭱���r�� �j13�r�� �j17�r�� 
for(size_t i = 0; i < SIZE;++i){ 
	//�]i ��0 ��SIZE �C��i+1 
   printf("%7u%13d      ",i,n[i]) ;
//�L�X �j7�r��i �j13�r�� n�}�C��i���� �j�j����������Ů� 

for (int j = 1 ;j <= n[i];++j){
printf ("%c",'*');} //'*'�Ÿ��n�γ�� 
//j�q1 �� n �}�C i ������ �C��L�X�@�� * j�C��+1

puts("");//���� �i�H��\n���N
}
}
 
   
   
