# Walkthrough - prob no 234.cpp

The O(1) space solution that ships in the Visual Studio project, line by
line.

## Lines 14-15: the trivial cases

An empty list or a single node is a palindrome, return true before any
pointer work starts.

## Lines 16-21: find the middle

`slow` moves one node per round, `fast` moves two. When the loop ends,
`fast` has run off the end and `slow` sits on the first node of the
second half. For odd length lists that is the middle node.

## Lines 22-23: set up the reversal

`prev` starts NULL, `curr` starts at `slow`. The reversal covers only
the second half, the first half stays exactly as it was.

## Lines 25-31: the three pointer reversal

Each round saves `curr->next`, flips the link to `prev`, then advances
both `prev` and `curr`. When `curr` becomes NULL, `prev` is the new head
of the reversed second half.

## Lines 33-34: the two walkers

`first` starts at the original head, `second` starts at the head of the
reversed second half. For an odd length list `second` begins on the
middle node.

## Lines 36-42: compare the halves

One pair per round. The first mismatch returns false immediately. The
loop ends when the second half ends, so the middle node of an odd length
list is only compared against itself.

## Line 44: every pair matched

The whole second half was checked against the first half, so the values
read the same forwards and backwards.

## Reading it as one sentence

Find the middle, reverse the back half, and compare the two halves until
either a pair differs or the second half runs out.
