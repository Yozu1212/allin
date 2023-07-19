#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[] = "31298  87.375";
	int x;
	double y;
	sscanf(s,"%d%1f",&x,&y);
	printf("%s\n%s%6d\n%s%8.3f\n",
	"The values stored in character array s are:",
	"integger:",x,"double:",y);
	system("PAUSE");
	return 0;
}

