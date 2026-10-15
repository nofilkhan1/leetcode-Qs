# Dry run - Palindrome Linked List

Two inputs: the even length [1, 2, 2, 1] and the odd length
[1, 2, 3, 2, 1].

## Even length: find the middle

    slow = fast = 1
    one step:  slow = 2 (second node), fast = 2 (third node)
    two steps: slow = 2 (third node), fast = NULL

The loop stops with `slow` on the third node, so the second half is
[2, 1].

## Even length: reverse the second half

    [2, 1]  becomes  [1, 2]

`prev` ends on the new head of the reversed half, the node holding 1.

## Even length: compare

    first  walks 1, 2
    second walks 1, 2

Every pair matches, the function returns true.

## Odd length: find the middle

    [1, 2, 3, 2, 1]
    slow ends on the 3, the exact middle

The second half starts at the middle node itself: [3, 2, 1].

## Odd length: reverse the second half

    [3, 2, 1]  becomes  [1, 2, 3]

## Odd length: compare

    first  walks 1, 2, 3
    second walks 1, 2, 3

The last comparison is the middle node against itself, which always
matches, so the result is true.

## What would break the trace

Reversing the whole list instead of only the second half, or moving
`slow` one extra step for even length lists, both show up immediately in
these two dry runs.
