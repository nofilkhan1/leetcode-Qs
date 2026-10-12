# Pitfalls - LeetCode 21

Twenty mistakes that show up when merging two sorted lists.
1. Returning `dummy` instead of `dummy->next`, which makes the result
   look like it starts with a zero.
2. Forgetting `tail = tail->next`. The next `tail->next = ...` then
   overwrites the node that was just attached and the list becomes a
   cycle.
3. Advancing `list1` or `list2` in the wrong branch, so the merge takes
   the wrong node or never advances at all.
4. Detaching a node before saving what its `next` pointed at, which
   loses the rest of that list.
5. Using `<` instead of `<=`. Still sorted, but equal values then come
   from `list2` first and the merge is no longer stable.
6. Forgetting one of the two empty list guards in the no dummy head
   version, which null dereferences on the first empty input.
7. Returning `tail` at the end instead of `head`. The caller gets a one
   node list.
8. Writing `tail->next = NULL` after the loop, which throws away the
   nodes of the list that still has elements.
9. Recursive version with no base case, which overflows the stack on the
   first empty list.
10. Recursive version that makes the call and ignores the return value,
    orphaning the rest of the list.
11. Allocating new nodes for the result. The problem says to reuse the
    existing ones and the judge checks the pointers.
12. Deleting nodes that were attached. The judge still owns them.
13. Assuming one list is always shorter or always behind. The merge must
    work for any interleaving.
14. Reversing the comparison and comparing `tail->val` instead of the
    two current node values.
