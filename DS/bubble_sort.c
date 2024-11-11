#include <stdio.h>

int main() {
  printf("Enter number of elements: ");
  int n;
  scanf("%d", &n);
  printf("Enter elements: ");
  int a[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }

  for(int i = 0; i < n-1; ++i) {
    for(int j = 0; j < n-i-1; ++j) {
      if(a[j] > a[j+1]) {
        int tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }

  printf("Sorted array: ");
  for(int i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  
  return 0;
}
