# Dry run - Reverse Linked List

List under test: `1 -> 2 -> 3 -> NULL`
## Start

    prev = NULL
    curr = 1 -> 2 -> 3 -> NULL
## Iteration 1

    next = 2 -> 3 -> NULL
    1 -> NULL
    prev = 1, curr = 2

State: `1 <- 2 -> 3 -> NULL`
## Iteration 2

    next = 3 -> NULL
    2 -> 1
    prev = 2, curr = 3

State: `1 <- 2 <- 3 -> NULL`
## Iteration 3

    next = NULL
    3 -> 2
    prev = 3, curr = NULL

State: `1 <- 2 <- 3 <- NULL`
## After the loop

`curr == NULL`, so `prev` holds the new head:

    NULL <- 1 <- 2 <- 3
## Recursive view

    reverseList(1) calls reverseList(2)
    reverseList(2) calls reverseList(3)
    reverseList(3) returns 3           base case
    2->next->next = 2, 2->next = NULL  unwind
    1->next->next = 1, 1->next = NULL  unwind
    returns 3
## Takeaway

Both versions end up with the same chain, only the order in which the
pointers flip differs: iterative flips them on the way down, recursive
flips them on the way back up.
