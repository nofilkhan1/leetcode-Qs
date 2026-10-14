# Walkthrough - problem no 21.cpp

The solution that ships in the Visual Studio project, explained line by
line. It is the no dummy head version.
## Lines 16 to 20: the empty list guards

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

Merging with an empty list is just the other list, no work needed.
## Lines 22 to 23: the two pointers on the result

`head` is the first node of the merged list, `tail` is the node the next
attachment will hang off. Both start as NULL and are set immediately
after.
## Lines 24 to 33: picking the first node

There is no dummy node to attach to, so the first node is chosen by
hand: the smaller of the two heads wins and the list it came from is
advanced in the same branch.
## Line 35: tail follows head

    tail = head;

After the first pick the result holds exactly one node and both pointers
see it.
## Lines 36 to 50: the merge loop

While both lists still hold nodes, attach the smaller one to
`tail->next`, advance that list, then move `tail` onto the node that was
just attached.
## Line 49 is the one people forget

    tail = tail->next;

Without it the next `tail->next = ...` overwrites the node just attached
and the list collapses into a cycle.
## Lines 51 to 54: attaching what is left

The loop stops as soon as one list runs out. The other list is already
sorted and already linked, so a single pointer assignment appends all of
it.
## Line 56: return head

`head` never moved after it was set, so it is still the first node of
the merged list. Returning `tail` here would hand back a one node list.
## Why `<=` rather than `<`

With `<` the tie would go to `list2` and the merge would stop being
stable. The judge accepts both, but `<=` keeps the original relative
order of equal values.
## What this version deliberately does not do

No dummy node is created, no memory is allocated, and the input pointers
are not saved anywhere else. After the call, `list1` and `list2` point
into the merged list and must not be reused.
## Checking it by hand

1. Pick two short lists.
2. Write the values of `list1`, `list2`, `head` and `tail` after every
   line of the loop.
3. Confirm the loop ends when one list is empty.
4. Confirm the leftover list is attached exactly once.
