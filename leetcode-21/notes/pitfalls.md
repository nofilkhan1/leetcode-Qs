# Pitfalls - LeetCode 21

Twenty mistakes that show up when merging two sorted lists.
1. Returning `dummy` instead of `dummy->next`, which makes the result
   look like it starts with a zero.
2. Forgetting `tail = tail->next`. The next `tail->next = ...` then
   overwrites the node that was just attached and the list becomes a
   cycle.
