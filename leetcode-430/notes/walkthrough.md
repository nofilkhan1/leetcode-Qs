# Walkthrough - problem no 430.cpp

The iterative splice solution that ships in the Visual Studio project,
line by line.

## Lines 6-8: the loop

`curr` starts at `head` and walks the whole list. The loop only stops
when `curr` runs past the last node.

## Lines 10-13: a child appears

The moment `curr->child` is not NULL the code saves two pointers:
`nextNode` is where the list used to continue, `childHead` is where the
child chain starts. Both are needed for the rewiring below.

## Lines 16-20: find the tail of the child list

`temp` walks `childHead->next` until it stops on the last node of the
child chain. The splice needs that tail because it is the node that gets
joined back to `nextNode`.

## Lines 23-25: parent and child become one chain

    curr->next = childHead;
    childHead->prev = curr;
    curr->child = NULL;

The child chain now sits right after `curr` in both directions, and the
child pointer is cleared so the same list is never spliced twice.

## Lines 28-31: reattach the rest of the list

If `nextNode` was not NULL, the child tail and the saved next are joined
in both directions. If it was NULL the child chain was already at the end
of the list and there is nothing to reattach.

## Line 34: step forward

`curr = curr->next` now moves into whatever was spliced in, which is
exactly the next node that has to be checked for a child.

## Line 37: return head

The head never moves, the whole transformation happens below it.

## Reading the loop as one sentence

Walk the list, and every time a child shows up, pull the whole child
chain up to sit right after its parent, clear the child pointer, and
keep walking.
