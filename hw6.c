#include <stdio.h>

int main(void) {
  int arr[5];
  int odd[5];
  int even[5];
  int oddCount = 0, evenCount = 0;

  printf("Please input five integers: ");

  for(int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
    if(arr[i] % 2 == 1){
      odd[oddCount] = arr[i];
      oddCount++;
    }
    else if(arr[i] % 2 == 0){
      even[evenCount] = arr[i];
      evenCount++;
    }
  }
  printf("Odd numbers: ");
  for(int j = 0; j < oddCount; j++) {
    printf("%d ", odd[j]);
  }
  printf("\nEven numbers: ");
  for(int j = 0; j < evenCount; j++) {
    printf("%d ", even[j]);
  }
}