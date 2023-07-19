#include <stdio.h>
#include <stdlib.h>
void convertToUppercase(char *sPtr);
int main(int argc, char *argv[])
{
  char string[] = "cHaRaCters and $32.98";
  printf("The string before conversion is: %s",string);
  convertToUppercase(string);
  printf("\nThe string after conversion is: %s\n",string);
  system("PAUSE");	
  return 0;
}

void convertToUppercase(char *sPtr)
{
     while(*sPtr != '\0')
     {
           *sPtr = toupper(*sPtr);
           ++sPtr;
     }
}
