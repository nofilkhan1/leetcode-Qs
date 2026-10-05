# Common pitfalls - LeetCode 206

Reversing a list looks easy until one missing line loses half of it.
1. Forgetting to save `curr->next` before overwriting it. The rest of
   the list becomes unreachable and the loop never terminates.
2. Returning `head` instead of `prev` at the end. The original head is
   the tail by then, so the caller would walk the untouched input.
3. Skipping `head->next = NULL` in the recursive version. The old tail
   still points back into the list and you have built a cycle.
4. Missing the empty list guard. `reverseList(NULL)` has to return
   `NULL` instead of dereferencing `head->next`.
5. Using recursion on very long lists. The stack grows linearly with n
   and the judge may hit the limit before the algorithm does.
