#include <stdio.h>
#include <ctype.h>//�r���B�z�禡�w 

int main() {
    char input;
    printf("�п�J�@�Ӧr��: ");
    scanf("%c", &input);//isdigit 0-9�����Ʀr 
    
    printf("\n%c%s%s\n",  input, /*�Lc */isdigit( input ) ? "�O":"���O", /*�Ĥ@��s�P�_�O���O*/ "�Ʀr");/*s�L�X�P�_����*/ 
    printf("%c%s%s\n",  input,isalpha( input ) ? "�O":"���O", "�r��");//isalpha �r��
	printf("%c%s%s\n",  input,isalnum( input ) ? "�O":"���O", "�Ʀr�Φr��");//isalnum �r���μƦr
	printf("%c%s%s\n",  input,isxdigit( input ) ? "�O":"���O", "16�i���");//A-F a-f 0-9 .
	printf("%c%s%s\n",  input,islower( input ) ? "�O�p�g":"�O�j�g", "�r��");//�O�_���p�g.  
    printf("%c%s%s\n",  input,isblank( input ) ? "�O":"���O", "�Ů�");//�O�_���Ů� 
    return 0;//�W �Ѧ�pic8.1-8.2 
}
