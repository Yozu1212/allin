#include <stdio.h>
#include <stdlib.h>
void cubeByReference(int *nPtr);
int main(int argc, char *argv[])
{
  int number = 5;
  printf("原始數值為%d",number);
  cubeByReference(&number);
  printf("\n新的數值為%d\n",number); 
  system("PAUSE");	
  return 0;
}

void cubeByReference(int *nPtr)
{
     *nPtr = *nPtr * *nPtr * *nPtr;
}
