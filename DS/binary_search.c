#include <stdio.h>

int main() {
  printf("Enter number of elements: ");
  int n;
  scanf("%d", &n);

  printf("Enter the elements: ");
  int a[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }

  printf("Enter the element to be searched: ");
  int key;
  scanf("%d", &key);

  int low = 0, high = n-1;
  while(low <= high) {
    int mid = (low + high) / 2;
    if(a[mid] < key) {
      low = mid + 1;
    }
    else if(a[mid] == key) {
      printf("%d found at index: %d\n", key, i);
      break;
    }
    else {
      high = mid - 1;
    }
  }

  if(low > high) {
    printf("%d not found!\n", key);
  }
  
  return 0;
}
