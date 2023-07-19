#include <stdio.h>
int isPrime(int n, int i) ;

int main() {
  int n;
  printf("輸入一個正整數: ");
  scanf("%d", &n);
  if (isPrime(n, n-1) == 1) {
    printf("是質數\n");
  } else {
    printf("不是質數\n");
  }
  return 0;
}

 isPrime( int n,  int i) {
  if (i == 1) {
    return 1;
  } 
  else if (n % i == 0) {
      return 0;
    } 
else  return isPrime(n, i-1);
}
