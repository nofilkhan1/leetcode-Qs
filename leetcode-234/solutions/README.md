# Approaches - LeetCode 234

| Approach | File | Time | Space |
|----------|------|------|-------|
| Reverse the second half | `approach1_reverse_second_half.cpp` | O(n) | O(1) |
| Recursive compare | `approach2_recursive.cpp` | O(n) | O(n) |

The Visual Studio project uses the reverse second half version. Find the
middle with slow and fast pointers, reverse the back half in place, then
compare the two halves node by node.

The recursive version replaces the reversal with the call stack: the
recursion reaches the end of the list first and compares on the way back
up while a `front` pointer walks the first half forwards.

Both versions stop at the first mismatch and both treat the middle node
of an odd length list as free, because it is compared against itself.
