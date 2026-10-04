# Approaches - LeetCode 206

Two ways to reverse a singly linked list, both O(n) time.
| Approach | File | Space | Notes |
|----------|------|-------|-------|
| Iterative three pointers | `approach_iterative.cpp` | O(1) | The one to submit. |
| Recursive | `../ConsoleApplication1/ConsoleApplication1.cpp` | O(n) | Clean, but uses the call stack. |
## Iterative

One pass, three pointers, no allocation. The loop runs while
`curr != NULL` and `prev` trails one step behind it.
## Recursive

Reverse the tail first, then attach the current node to the end of the
already reversed remainder. The base case stops at `head == NULL`.
## Why the tail must be cleared

After `head->next->next = head` the node that follows `head` points
straight back at it. Without clearing `head->next` the list is a cycle.
