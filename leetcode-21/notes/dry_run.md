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
## Why the empty list case costs nothing

No special branch is needed at the end: the ternary attaches whatever
is left, and if both lists are empty it attaches NULL.
## Third run - [5] against [1,2]

    1 < 5, so list2 wins the first comparison.
    Result so far: 1, list2 moves to 2.
    2 < 5, list2 wins again. Result: 1 2.
    list2 is empty, attach list1 which still holds 5.
    Final result: 1 -> 2 -> 5.
## Reading the same trace in the no dummy head version

The only difference is the first block: instead of a dummy node, `head`
and `tail` are both set to the winner of the first comparison. From
step 2 onwards the trace is identical.
## Reading the same trace recursively

The recursion unwinds from the last node backwards: it keeps taking the
smaller head until one list is empty, then the base case returns the
other list and every frame attaches one node on the way back up.
## Tracing by hand, the practical way

Draw two columns for the two lists and one row for the result. Cross
out a value the moment its node is attached, and write the value of
`tail` next to the row.
## Fourth run - two nodes against an empty list

    list1 = [7, 8]   list2 = []
    The loop condition fails on the first check.
    tail->next = NULL, so the remainder attach writes nothing.
    The result is 7 -> 8, the input list returned untouched.
## What a dry run catches that a glance does not

A missing tail advance shows up as a cycle on the fourth step, a lost
remainder shows up as a result that is too short, and an inverted
comparison shows up as a row that is not sorted. None of the three is
obvious from reading the function once.
