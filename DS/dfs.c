#include <stdio.h>

int n, visited[100], graph[100][100];

void dfs(int n, int node, int graph[n][n]) {
  if(visited[node]) {
    return;
  }
  visited[node] = 1;
  printf("%d ", node);
  for(int i = 0; i < n; ++i) {
    if(graph[i][node]) {
      dfs(n, i, graph);
    }
  }
}

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
  
  
  dfs(n, start, graph);

  return 0;
  
}
