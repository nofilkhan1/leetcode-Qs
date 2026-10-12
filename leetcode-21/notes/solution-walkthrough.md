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
