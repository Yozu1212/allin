#include<stdio.h> 
#include<ctype.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
union number{
	int x;
	double y;
};
int main(int argc, char *argv[]) {
	union number vaule;
	vaule.x = 100;
	printf("%s\n%\n%s\n  %d\n\n%s\n  %f\n\n\n",
	       "Put 100 in the inegger member",
		   "and print both members.",
		   "int:",value.x,
		   "double:",value.y);
	value.y=100;
	printf("%s\n%\n%s\n  %d\n\n%s\n  %f\n",
	       "Put 100.0 in the floating member",
		   "and print both members.",
		   "int:", value.x,
		   "double:",value.y);
}
