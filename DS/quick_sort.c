#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int a[], int low, int high) {
  int pivot = a[high];
  int i = (low - 1);
  for(int j = low; j < high; ++j) {
    if(a[j] <= pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i+1], &a[high]);
  return (i + 1);
}

void quick_sort(int a[], int low, int high) {
  if(low < high) {
    int pos = partition(a, low, high);
    quick_sort(a, low, pos-1);
    quick_sort(a, pos+1, high);
  }
}

int main() {
  printf("Enter number of elements: ");
  int n;
  scanf("%d", &n);
  printf("Enter elements: ");
  int a[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  quick_sort(a, 0, n-1);
  printf("Sorted array: ");
  for(int i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  puts("");
  
  return 0;
}
