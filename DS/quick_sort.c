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
  
  
  return 0;
}
