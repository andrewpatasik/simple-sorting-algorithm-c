#include <stdio.h>

int ascend(int values[], int n){
  int i;
  int j;
  int temp;

  for (i = 0; i < n-1; i++) {
    for (j = i + 1; j < n; j++) {
      if (values[i] > values[j]) {
        temp = values[i];
        values[i] = values[j];
        values[j] = temp;
      }
    }
  }
}

int descend(int values[], int n){
  int i, j, temp;

  for (i = 0; i < n-1; i++) {
    for (j = i + 1; j < n; j++) {
      if (values[i] < values[j]) {
        temp = values[i];
        values[i] = values[j];
        values[j] = temp;
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  int array[10] = {5, 3, 2, 9, 6, 8, 7, 1, 10, 4};
  int i;
  int ascend(int values[], int n);

  printf("Sebelum Sorting: ");
  for (i = 0; i < 10; i++) {
    printf("%i ", array[i]);
  }

  printf("\n");
  ascend(array, 10);

  printf("Setelah Sorting Naik: ");
  for (i = 0; i < 10; i++) {
    printf("%i ",array[i]);
  }

  printf("\n");

  descend(array, 10);
  printf("Setelah Sorting Turun: ");
  for (i = 0; i < 10; i++) {
    printf("%i ", array[i]);
  }
  return 0;
}
