# Approaches - LeetCode 104

| Approach | File | Time | Space |
|----------|------|------|-------|
| Recursive DFS | `approach1_recursive_dfs.cpp` | O(n) | O(h) |
| Iterative BFS | `approach2_iterative_bfs.cpp` | O(n) | O(width) |

The Visual Studio project uses the recursive version: ask both subtrees
for their depth, add one for the current node, return the larger side.

The BFS version counts finished levels instead. It never uses the call
stack, so a pathologically deep tree cannot overflow it, but its queue
can hold an entire level of a wide tree.

Both visit every node exactly once, so the running time is O(n) no
matter the shape of the tree.
