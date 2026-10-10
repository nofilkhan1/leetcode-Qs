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
