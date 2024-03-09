#include <stdio.h>

void bubbleSort(int arr[], int size, int swapCounts[[]]) {
  for (int i = 0; i < size -1; i++) {
    for (int k = 0; k < size - i - 1; k++) {
      if (arr[k] > arr[k + 1]) {

        int temp = arr[k]; //swapping elements
        arr[k] = arr[k + 1];
        arr[k + 1] = temp
        
        swaps[arr[k + 1]]++; //counting swaps
      }
    }
  }
}
void SelectionSort(int numbers[, int n, int swaps[]) {
  for (int = 0; i < n -1; i++) {
    int minIndex = i;
    for (int k = i + 1; k < n; k++) {
      if (numbers[k] < numbers[minIndex]) {
        minIndex = k;
      }
    }
    if (minIndex != i) { //swapping elements
      int temp = numbers[i];
      numbers[i]= numbers[minIndex];
      numbers[minIndex] = temp;

      swaps[numbers[i]]++; //counting elements
    }
  }
}
