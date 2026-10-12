# Dry run - LeetCode 21

Every state of the pointers while merging `[1,2,4]` with `[1,3,4]`.
## Start

    list1 -> 1 -> 2 -> 4
    list2 -> 1 -> 3 -> 4
    dummy  -> (empty)
    tail   = dummy
## Step 1 - 1 <= 1, take from list1

    dummy -> 1
    list1 -> 2 -> 4
    tail sits on the node 1
## Step 2 - 1 < 2, take from list2

    dummy -> 1 -> 1
    list2 -> 3 -> 4
    tail sits on the second node
## Step 3 - 2 <= 3, take from list1

    dummy -> 1 -> 1 -> 2
    list1 -> 4
## Step 4 - 4 > 3, take from list2

    dummy -> 1 -> 1 -> 2 -> 3
    list2 -> 4
## Step 5 - 4 <= 4, take from list1

    dummy -> 1 -> 1 -> 2 -> 3 -> 4
    list1 is now empty
## Step 6 - the loop stops

One list is empty, so the while condition fails. `tail` still sits on
the node 4 that was taken from list1.
## Attaching what is left

    tail->next = list2;   // list2 still holds its node 4

    dummy -> 1 -> 1 -> 2 -> 3 -> 4 -> 4
## The result

`dummy.next` is the first 1, and the merged list holds six nodes, three
from each input. Both input lists are now part of the result.
## How many times did the tail move?

Five times inside the loop plus the initial pick, one move per attached
node except the remainder which is attached in one pointer write.
## Which pointer is always behind?

`tail` always points at the last node of the result. `list1` and
`list2` always point at the next node still to be considered, never at
a node that is already in the result.
## Second run - empty list against [1]

    list1 = []
    list2 = [1]
    The loop condition fails immediately.
    tail->next = list2 attaches the whole list.
    The result is 1.
