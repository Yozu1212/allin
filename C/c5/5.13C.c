#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int n;
  srand(time(NULL)); 
  n = rand() % 20;
  printf("n = %d\n", n);
  return 0;
}
