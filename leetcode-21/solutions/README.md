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
