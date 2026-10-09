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
