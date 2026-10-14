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
## How to present it in an interview

Say the dummy head version first, mention the recursive one as the
clearest description, then the no dummy head version as the minimal
form.
## How to test it, in order

Empty list, one node each, no overlap, full interleave, equal values,
and one list exhausted immediately.
## Follow-up: merge k sorted lists (23)

Pairwise merging in a divide and conquer loop, or a priority queue over
the k heads. Both run in O(N log k).
## Follow-up: sort a linked list (148)

Bottom up merge sort calls this merge as its inner step, which is why
merge sort is the right sorting algorithm for linked lists.
## Related problems worth doing next

- 23 - merge k sorted lists
- 88 - merge sorted array
- 148 - sort list
- 315 - count of smaller numbers after self
## What to say out loud before you submit

- Why the merge is stable.
- Why no node is allocated.
- What happens when one of the lists is empty.
- How the k list follow-up changes the complexity.
## One line per approach

- Dummy head: attach the smaller node, return `dummy.next`.
- No dummy head: pick the first node by hand, then merge.
- Recursive: take the smaller head and recurse on the remainders.
