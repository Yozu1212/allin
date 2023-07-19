#include <stdio.h>

enum months{//列舉常數 從1開始 
	JAN = 1 , FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
};

int main (void){
	
	const char *monthName[]={"","Jaunary","February","March","April","May","June",
	"July","August","September","October","November","December"
	};//定義陣列字串 
	
	//讓month 為 months的型態 從JAN到DEC 每次加一 
	for(enum months month= JAN;month<= DEC ; ++month){
		printf("%2d%11s\n",month , monthName[month]);
	//印出 month的值 跟陣列monthName month的值 
	}
}
