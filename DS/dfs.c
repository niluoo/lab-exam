#include <stdio.h>

int n, visited[100], graph[100][100];

void dfs(int n, int node, int graph[n][n]) {
  if(visited[node]) {
    return;
  }
  visited[node] = 1;
  printf("%d ", node);
  for(int i = 0; i < n; ++i) {
    if(graph[i][node] || graph[node][i]) {
      dfs(n, i, graph);
    }
  }
}

int main() {
 // printf("Enter number of vertices and edges: ");
  int n, m;
  scanf("%d%d", &n, &m);
  int visited[n];
  for(int i = 0; i < n; ++i) {
    visited[i] = 0;
  }

  int graph[n][n];
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      graph[i][j] = 0;
    }
  }
  //printf("Add egdes to the graph: \n");
  for(int i = 0; i < m; ++i) {
    int a, b;
    scanf("%d%d", &a, &b);
    graph[a][b] = 1;
  }
  //printf("Enter starting vertex: ");
  int start;
  scanf("%d", &start);
  printf("DFS traversal: ");
  
  
  dfs(n, start, graph);
  
  return 0;
  
}
