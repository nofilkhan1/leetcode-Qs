# Test cases - LeetCode 234

## 1. Empty list

    input = []
    output = true

## 2. Single node

    input = [7]
    output = true

## 3. Two equal nodes

    input = [4, 4]
    output = true

## 4. Two different nodes

    input = [1, 2]
    output = false

## 5. Even length palindrome

    input = [1, 2, 2, 1]
    output = true
## 6. Odd length palindrome

    input = [1, 2, 3, 2, 1]
    output = true

The middle node 3 is compared against itself.

## 7. Odd length, mismatch in the middle

    input = [1, 2, 3, 4, 1]
    output = false

## 8. All values equal

    input = [5, 5, 5, 5, 5]
    output = true

## 9. Long even palindrome with the mismatch at the end

    input = [1, 2, 3, 4, 4, 3, 2, 9]
    output = false

The last pair is the only one that differs, which catches a comparison
loop that stops one node too early.
