#include<stdio.h> 
#include<ctype.h> 
int main(void)
{
	char character='A';
	printf("%s\n",character);
	
	priuntf("%s\n","this is a string");
	
	char string[]="this is a string";
	printf("%s\n",string);
	
	const char *stringPtr="this is a string";
	printf("%s\n",stringPtr);
	system("pause");
	return 0;
}
