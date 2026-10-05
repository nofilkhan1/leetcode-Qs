# Common pitfalls - LeetCode 138

1. Forgetting `temp = temp->next` in the clone loop turns step 1 into an
   infinite loop.
2. Returning the last clone node instead of `cloneHead` returns an empty
   looking list when the tail moved on.
3. Writing `temp->next = temp->random` in step 3 destroys the `next`
   chain. It must be `temp->next->random = temp->random->next`.
4. Guarding step 3 with `temp->next != NULL` is useless, the guard that
   matters is `temp->random != NULL`.
5. Not restoring `orgNode->next` in step 4 leaves the two lists
   intertwined.
6. Allocating the clone without NULL checks makes an empty input crash.
