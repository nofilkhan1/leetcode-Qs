# Common pitfalls - LeetCode 206

Reversing a list looks easy until one missing line loses half of it.
1. Forgetting to save `curr->next` before overwriting it. The rest of
   the list becomes unreachable and the loop never terminates.
