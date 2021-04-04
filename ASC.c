// Bubble sort in C

#include <stdio.h>

// method to perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
    
    // check if swapping occurs  
    int swapped = 0;
    
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if 
        // the first element is greater than second
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }
    
    // no swapping means the array is already sorted
    // so no need of further comparison
    if (swapped == 0) {
      break;
    }
    
  }
}

// function to print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main method
int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find the length of the array
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  
  // call function to print the array
  printArray(data, size);
}
