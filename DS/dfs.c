#include <stdio.h>

int main() {
  printf("Enter number of vertices: ");
  int n;
  scanf("%d", &n);
  int visited[n];
  for(int i = 0; i < n; ++i) {
    visited[i] = 0;
  }

  int graph[n][n];
  printf("Enter the adjacency matrix: ");
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      scanf("%d", &graph[i][j]);
    }
  }

  printf("Enter starting vertex: ");
  int start;
  scanf("%d", &start);
  printf("DFS traversal: ");

  //

  return 0;
  
}
