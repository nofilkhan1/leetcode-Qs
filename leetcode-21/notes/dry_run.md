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
