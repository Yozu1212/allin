#include<stdio.h>
#include<string.h>

int main(void)
{ 
    const char *string1="abcdefghijklmnopqrstuvwxyz";
    const char *string2="four";
    const char *string3="Boston";
	printf("%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\"%s\"%s%u\n",
	"The length of ",string1,"is ",strlen(string1),
	"The length of ",string2,"is ",strlen(string2),
	"The length of ",string3,"is ",strlen(string3));
	system("pause");
	return 0;
} 
