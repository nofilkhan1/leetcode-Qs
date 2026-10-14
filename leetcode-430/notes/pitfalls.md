# Pitfalls - LeetCode 430

1. Forgetting `curr->child = NULL` after the splice. The same child list
   gets moved in again on the next pass and the loop never ends.
2. Losing `nextNode` before rewiring `curr->next`. Once the child chain
   is attached there is no way back to the rest of the list.
3. Not setting `childHead->prev = curr`. The flattened list is doubly
   linked, a missing `prev` breaks traversal from the front side.
4. Forgetting `nextNode->prev = temp`. The two halves are then linked in
   one direction only.
5. Walking `temp` until it is NULL instead of stopping on the last node.
   One step too far and the tail pointer is lost.
6. Moving `curr` into the child before the splice finishes. `curr` has to
   stay on the parent until every pointer is rewired.
7. Stack version: pushing child before next. The stack is LIFO, so the
   child would be processed after the parked next and the order rule
   breaks.
8. Stack version: popping without writing `pending.top()->prev`. Same
   broken doubly linked chain as pitfall 4.
9. Assuming a child list always has at least two nodes. A one node child
   is common and must not be special cased away.
10. Returning a new head. The head never changes, `flatten` returns the
    same pointer it was given.
