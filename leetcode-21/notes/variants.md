# Variants - LeetCode 21

Twenty problems and follow-ups that reuse this exact merge.
1. **88. Merge Sorted Array** - the same algorithm on two arrays, merged
    from the back so no extra space is needed.
2. **23. Merge k Sorted Lists** - a priority queue over the k heads, or
    pairwise merging in a divide and conquer loop. O(N log k).
3. **148. Sort List** - bottom up merge sort whose inner step is this
    merge.
4. **88 / 21 variant with stability** - keep the order of equal values,
    which needs `<=` rather than `<`.
5. **Merge three sorted lists** - merge the first two, then merge that
    result with the third. O(n + m + p).
6. **Merge and return the count of comparisons** - a nice exercise for
    measuring how the two orders of the inputs change the work done.
7. **Merge two sorted lists into an array** - same pointers, but the
    result is written into a vector instead of relinking nodes.
8. **Check if a list is a merge of two others** - run the merge and
    compare the result with the candidate list node by node.
9. **315. Count of Smaller Numbers After Self** - the counting step is a
    merge sort on indices, which uses this same merge shape.
10. **143. Reorder List** - merge the first half with the reversed second
    half using this routine.
11. **Palindromic linked list (234)** - merge the reversed second half
    with the first half to rebuild the original order.
12. **Merge two binary search trees** - the in order traversals are
    sorted, so they can be merged the same way.
13. **Merge two sorted arrays with no extra space** - gap method, the
    comparison idea carries over even though the data structure does not.
14. **Merge sorted intervals (56)** - sort by start, then sweep and merge
    overlapping ranges. The loop shape is the same.
15. **Add two numbers (2)** - two pointers over two lists with a carry,
    the same loop skeleton as this merge.
16. **Swap nodes in pairs (24)** - two pointers advancing by two, another
    exercise in rewiring `next`.
17. **Reverse nodes in k groups (25)** - reverse each block, then stitch
    the blocks together the way this merge stitches nodes.
18. **Partition list (86)** - one pass with two tails, one for the small
    side and one for the large side, then join them.
19. **Odd even linked list (321)** - two lists built in one pass and then
    concatenated, which is a degenerate merge.
