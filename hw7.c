#include <stdio.h>

int main(void) {
  int arr1[6] = {1, 2, 3, 4, 5, 6};
  int arr2[6] = {7, 8, 9, 10, 11, 12};
  int * ptr1 = arr1;
  int * ptr2 = arr2;
  int tmp;

  printf("arr1: ");
  for(int j = 0; j < 6; j++) {
    printf("%d ", arr1[j]);
  }
  
  printf("\narr2: ");
  for(int j = 0; j < 6; j++) {
    printf("%d ", arr2[j]);
  }

  for(int i = 0; i < 6; i++) {
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    ptr1++;
    ptr2++;
  }

  printf("\n\nafter swap\narr1: ");
  for(int j = 0; j < 6; j++) {
    printf("%d ", arr1[j]);
  }

  printf("\narr2: ");
  for(int j = 0; j < 6; j++) {
    printf("%d ", arr2[j]);
  }

}