# 138. Copy List with Random Pointer

LeetCode: https://leetcode.com/problems/copy-list-with-random-pointer/ - **Medium**
## Problem

Given the head of a linked list where every node holds `val`, `next` and a
`random` pointer, return a **deep copy** of the list.

The `random` pointer of a node may point to any node of the list, or to
`NULL`.
## Example

    Input:  head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
    Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]

The copy must be deep: no node of the result may be shared with the input.
## Approach - interleaving (O(1) extra space)

Instead of a hash map, weave every clone right after its original:

    original:   1 -> 2 -> 3
    interleaved: 1 -> 1' -> 2 -> 2' -> 3 -> 3'

A clone's `random` then always lives at `original->random->next`.
## Steps

1. Build a clone list that carries only the values.
2. Splice each clone node in directly after its original node.
3. Set `clone->random = original->random->next`.
4. Split the interleaved list back into the two original lists.
## Complexity

- **Time** O(n) - four linear passes over the list.
- **Space** O(1) extra, apart from the nodes that were copied anyway.
