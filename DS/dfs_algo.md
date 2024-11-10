
<pre>
steps:
</pre>

 1. start
 2. globally declare arrays ```visited``` and ```graph```
 3. declare recursive function ```dfs()```
 4. read number of vertices and edges
 5. for ```i = 0``` to ```n-1```:
      assign ```visited[i] = 0```
 6. read edges and mark ```1``` in adjacency matrix
 7. read starting vertex
 8. run dfs from starting vertex

<pre> dfs() </pre>
1. if node is visited return
2. otherwise mark it as visited, print node
3. go through all neighboring vertices, run dfs
