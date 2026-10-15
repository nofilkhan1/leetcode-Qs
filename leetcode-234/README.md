# 234. Palindrome Linked List

LeetCode: https://leetcode.com/problems/palindrome-linked-list/ - **Easy**
## Problem

Given the head of a singly linked list, return `true` if the values read
front to back are the same as back to front, otherwise `false`.

You must run in O(n) time. The follow-up asks for O(1) extra space as
well.

## Examples

    [1, 2, 2, 1]  -> true
    [1, 2, 3, 2, 1]  -> true
    [1, 2]  -> false
    []  -> true
## Approaches

| Approach | Time | Space |
|----------|------|-------|
| Reverse the second half | O(n) | O(1) |
| Recursive compare | O(n) | O(n) call stack |
| Copy to an array | O(n) | O(n) |

The Visual Studio project uses the reverse second half version, which is
the one that satisfies the follow-up.
## The three steps of the O(1) version

1. Walk slow and fast to the middle, so `slow` ends on the start of the
   second half.
2. Reverse the second half in place.
3. Walk both halves and compare node by node.

For an odd length list the middle node ends up inside the reversed
second half and gets compared against itself, which always matches.

## Edge cases

- Empty list and single node, both palindromes.
- Two nodes, a palindrome only when the values are equal.
- Every value the same.
- The first half and the second half differing at the very last pair.
