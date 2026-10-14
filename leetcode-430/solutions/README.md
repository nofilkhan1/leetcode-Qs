# Approaches - LeetCode 430

| Approach | File | Time | Space |
|----------|------|------|-------|
| Iterative splice | `approach1_iterative_splice.cpp` | O(n) flat, O(n * depth) nested | O(1) |
| Explicit stack | `approach2_stack.cpp` | O(n) | O(depth) |

The Visual Studio project uses the splice version. It rewires the list in
place: every time a `child` pointer shows up, the whole child chain is
moved up to sit right after its parent and the `child` link is cleared.

The stack version splices one node at a time and parks the interrupted
`next` on a stack, which keeps the walk strictly linear even when the
list nests deeply.

Both versions keep the original node order: the node itself, then its
child list, then the nodes that followed it.
