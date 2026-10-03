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
