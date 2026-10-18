# Pitfalls - LeetCode 104

1. Returning `leftHeight` or `rightHeight` without the `+ 1`. Every node
   disappears from the count and the answer is always one too small.
2. Returning 1 for the empty tree base case. Every path gains a phantom
   level and a single node tree reports depth 2.
3. Comparing node values instead of subtree depths. Values say nothing
   about the shape of the tree.
4. Recursing without the null guard, which crashes on any missing child
   pointer.
5. Using the min depth logic from problem 111 by mistake. There a node
   with one child is not a leaf, here every node counts the same.
6. BFS version: incrementing depth for every node instead of once per
   level. The result then depends on how many nodes exist, not how tall
   the tree is.
7. BFS version: pushing null children onto the queue, which fills it
   with nothing and usually loops forever.
8. BFS version: taking `q.size()` after children were pushed instead of
   at the start of the level, which mixes two levels together.
9. A depth variable declared global or outside the function and never
   reset, so the second test case inherits the first one.
10. Claiming the recursive version is O(log n) space because trees are
    balanced. A linked-list-shaped tree makes the stack O(n).
