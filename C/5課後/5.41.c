#include <stdio.h>
int isPrime(int n, int i) ;

int main() {
  int n;
  printf("��J�@�ӥ����: ");
  scanf("%d", &n);
  if (isPrime(n, n-1) == 1) {
    printf("�O���\n");
  } else {
    printf("���O���\n");
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
