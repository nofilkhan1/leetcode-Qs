# Approaches - LeetCode 21

Three correct solutions, all of them O(n + m) time.
| Approach | File | Space | Edge cases handled by |
|----------|------|-------|-----------------------|
| Dummy head | `approach1_dummy_head.cpp` | O(1) | the dummy node |
| No dummy head | `approach2_no_dummy.cpp` | O(1) | two early returns |
| Recursive | `approach3_recursive.cpp` | O(n + m) | two base cases |
## The shared core

All three do the same thing: repeatedly take the smaller of the two
current nodes and attach it to the result. Only the bookkeeping around
the very first node differs.
## Dummy head against no dummy head

The dummy head removes the special case of the first node. You pay one
extra local and one `dummy.next` at the end.
## Iterative against recursive

The recursive version is shorter and mirrors the statement, but its
call stack grows with the length of the merged list.
## Stability

Every version uses `<=`, so equal values keep the order they had in
`list1` before those that came from `list2`.
## What the judge actually checks

- The output is sorted.
- The output is made of the original node pointers, no new nodes.
- Empty list inputs behave.
## Writing it from memory

1. Base cases or a dummy node.
2. Loop while both lists still have nodes.
3. Attach the smaller, advance it, advance the tail.
4. Attach whatever is left over.
5. Return the correct head.
## Common failure: the self loop

Forgetting `tail = tail->next` makes the last attached node point at
itself, and printing the list then never terminates.
## Common failure: dropped remainder

Writing `tail->next = NULL` instead of attaching the leftover list
throws away every node that had not been merged yet.
## Complexity, worked out

There are n + m nodes in the result and each one is attached exactly
once, so the loop body runs n + m times.
## Complexity of the recursive version

One node is consumed per call, so there are n + m frames and each frame
does constant work.
