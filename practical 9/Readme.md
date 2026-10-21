# Practical 9: Graph Traversal for Campus Navigation Using BFS and DFS

## Practical Title
Graph Traversal for Campus Navigation Using BFS and DFS.

## Problem Statement
Represent a campus as a graph where buildings are vertices and paths are edges. Store the graph in an adjacency matrix and implement Breadth-First Search (BFS) and Depth-First Search (DFS) from a selected starting building.

## Objective
- Represent a graph using an adjacency matrix.
- Implement BFS and DFS traversal.
- Use graph traversal to explore connected buildings.
- Understand queue-based and recursive traversal approaches.

## Algorithm / Approach
1. Read the number of buildings (`vertices`) and paths (`edges`).
2. Initialise an `n × n` adjacency matrix to zero.
3. For each path `(x, y)`, set `arr[x][y] = arr[y][x] = 1` because the campus paths are represented as undirected edges.
4. Print the adjacency matrix.
5. **BFS:** initialise `visited[]` and a queue; mark and enqueue the start vertex. Repeatedly dequeue a vertex, print it, and enqueue each unvisited adjacent vertex.
6. Reset `visited[]`.
7. **DFS:** mark and print the current vertex, then recursively visit each unvisited adjacent vertex.
8. Print both traversal orders.

## Data Structure / Concept Used
- Graph
- Adjacency matrix
- Queue for BFS
- Visited array
- Recursion (implicit call stack) for DFS

## Test Cases
| Test case | Graph/input | Expected result |
|---|---|---|
| Single building | 1 vertex, 0 edges, start 0 | BFS and DFS both print `0` |
| Connected graph | Edges 0–1, 0–2, 1–3; start 0 | BFS: `0 1 2 3`; DFS: `0 1 3 2` with ascending neighbour scan |
| Disconnected graph | Two separate components, start in one component | Traversals visit only the component reachable from the start |
| No paths | Several vertices, 0 edges | Each traversal prints only the start vertex |

## Sample Input and Output
**Sample input**
```text
Enter Number of Buildings: 4
Enter Number of Paths: 3
Enter Path 1 (vertex numbers 0 to 3): 0 1
Enter Path 2 (vertex numbers 0 to 3): 0 2
Enter Path 3 (vertex numbers 0 to 3): 1 3
Enter Starting Building (0 to 3): 0
```

**Sample output (key lines)**
```text
Adjacency Matrix for given data:
0 1 1 0
1 0 0 1
1 0 0 0
0 1 0 0
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 3 2
```

Traversal order depends on the order in which neighbours are scanned; this code scans vertex indices from low to high.

## Time Complexity
- Building/printing the adjacency matrix: **O(V²)**.
- BFS and DFS with an adjacency matrix: **O(V²)** each, where `V` is the number of vertices.

## Space Complexity
**O(V²)** for the adjacency matrix, plus **O(V)** for the BFS queue and visited arrays. DFS also uses up to **O(V)** recursive call-stack space.

## Conclusion
BFS explores reachable vertices level by level using a queue, while DFS explores deeply using recursion. The adjacency matrix provides a straightforward representation of campus connectivity.
