# Pitfalls - LeetCode 234

1. Writing the fast loop as `while (fast != NULL)` only. The body then
   reads `fast->next->next` on a node whose next is NULL.
2. Advancing `slow` one extra step after the loop for even length
   lists. The second half then starts too late and a list like [1, 2]
   is reported as a palindrome.
3. Reversing the whole list instead of only the second half. The first
   half is destroyed before any comparison happens.
4. Forgetting the empty list and single node guard. Both are
   palindromes and the reverse loop would simply do nothing, but the
   comparison must not be skipped either.
5. Comparing values before the reversal is done, which walks a half
   reversed list and gives a random answer.
6. Recursive version: advancing the front pointer on the way down
   instead of on the way back up, so the comparison always sees the
   same node.
7. Recursive version: losing the head reference, which is why the front
   pointer lives as a member instead of a local.
8. Storing every value in a vector "to keep it simple" when the
   follow-up asked for O(1) space.
9. Assuming the values are unique. [5, 5, 5] is a palindrome and a
   value based shortcut breaks on it.
10. Not restoring the list. The judge does not check it, but if the
    follow-up asks, reverse the second half once more to put the list
    back the way it was.
