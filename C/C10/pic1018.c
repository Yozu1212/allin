#include <stdio.h>

enum months{//�C�|�`�� �q1�}�l 
	JAN = 1 , FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
};

int main (void){
	
	const char *monthName[]={"","Jaunary","February","March","April","May","June",
	"July","August","September","October","November","December"
	};//�w�q�}�C�r�� 
	
	//��month �� months�����A �qJAN��DEC �C���[�@ 
	for(enum months month= JAN;month<= DEC ; ++month){
		printf("%2d%11s\n",month , monthName[month]);
	//�L�X month���� ��}�CmonthName month���� 
	}
}
