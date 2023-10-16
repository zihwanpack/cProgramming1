#include <stdio.h>

void binaryNum(int n){
  if(n < 2){
    printf("%d", n);
  }
  else{
    binaryNum(n / 2);
    printf("%d", n % 2);
  }
}

int main(void) {

  int n, result;

  printf("Please enter a number\n");
  scanf("%d", &n);
  binaryNum(n);
  printf("\n");
}