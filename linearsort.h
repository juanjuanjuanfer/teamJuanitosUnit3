void printArray(int arr[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertionSort(int arr[], int lenght) {
  for (int step = 1; step < lenght; step++) {
    int key = arr[step];
    int j = step - 1;

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main(int arr[], int lenght) {
  int lenght = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, lenght);
  printf("The array sorted in an ascending order is:\n");
  printArray(arr, lenght);
  return;
}