# Approaches - LeetCode 138

| Approach | Time | Space | Notes |
|----------|------|-------|-------|
| [Interleaving](approach1_interleaving.cpp) | O(n) | O(1) | Constant extra space, four passes, pointer surgery. |
| [Hash map](approach2_hashmap.cpp) | O(n) | O(n) | Two passes, much easier to prove correct. |

The interleaving version is what runs in `ConsoleApplication1`, it is the
one that satisfies the O(1) follow-up constraint. Start with the hash map
version to make sure the logic is right, then trade the map for pointer
weaving once the shape of the algorithm is clear.
