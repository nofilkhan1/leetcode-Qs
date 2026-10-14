# Dry run - Flatten a Multilevel Doubly Linked List

The classic example: node 3 holds the child list [6, 7].

## The list before

    1 <-> 2 <-> 3 <-> 4 <-> 5
                 |
                 v
                 6 <-> 7

## Step 1 - curr = 1

`child` is NULL, nothing to splice. `curr = curr->next`.

## Step 2 - curr = 2

Same, no child. Move on.

## Step 3 - curr = 3, a child shows up

    nextNode  = 4        where the list continued
    childHead = 6        where the child chain starts

## Step 4 - walk to the tail of the child

`temp` starts at 6, one step later `temp` is 7, which has no next.

## Step 5 - splice the child after 3

    3 <-> 6 <-> 7      and 3->child = NULL

## Step 6 - reattach the saved next

    7->next = 4, 4->prev = 7

    1 <-> 2 <-> 3 <-> 6 <-> 7 <-> 4 <-> 5

## Step 7 - keep walking

`curr = curr->next` moves to 6, then 7, then 4, then 5. None of them has
a child, so the loop only advances.

## After

    1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6 <-> 7

Every `child` pointer is NULL, every `prev` and `next` is consistent, and
the original order of the nodes is unchanged.
