#include<stdio.h> 
#include<ctype.h> 
int main(void)
{
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","According to islower:",
	islower('p')?"p is a":"p is not a"," lowercase letter",
	islower('P')?"P is a":"P is not a"," lowercase letter",
	islower('5')?"5 is a":"5 is not a"," lowercase letter",
	islower('!')?"! is a":"! is not a"," lowercase letter");
	
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n","According to isupper:",
	isupper('D')?"D is a":"D is not a"," uppercase letter",
	isupper('d')?"d is a":"d is not a"," uppercase letter",
	isupper('8')?"8 is a":"8 is not a"," uppercase letter",
	isupper('$')?"$ is a":"$ is not a"," uppercase letter");

	printf("%s%c\n%s%c\n%s%c\n%s%c\n",
	"u coverted to uppercase is ",toupper('u'),
	"7 coverted to uppercase is ",toupper('7'),
	"$ coverted to uppercase is ",toupper('$'),
	"L coverted to lowercase is ",tolower('L'));
	system("pause");
	return 0;
}
