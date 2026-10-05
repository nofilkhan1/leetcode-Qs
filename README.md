# leetcode-Qs

Solutions to LeetCode problems written in C++, one folder per problem.
## Problems

| # | Problem | Difficulty | Approach |
|---|---------|------------|----------|
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | Medium | Interleaving (O(1) space) |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | Three pointers / recursion |
## Folder layout

    leetcode-Qs/
    |-- README.md
    |-- .gitignore
    |-- docs/                        September 2026 study notes
    |-- leetcode-138/
    |   |-- README.md
    |   |-- ConsoleApplication1/     Visual Studio solution
    |   |-- solutions/               alternative approaches
    |   |-- notes/                   dry runs and pitfalls
    |   `-- tests/                   test cases
    `-- leetcode-206/
        |-- README.md
        |-- ConsoleApplication1/     Visual Studio solution
        |-- solutions/
        |-- notes/
        `-- tests/
## Building the Visual Studio solution

1. Open `leetcode-138/ConsoleApplication1/ConsoleApplication1.sln`.
2. Pick `Debug | x64` and press **F5**.
3. The sources are LeetCode-style snippets, paste them into the LeetCode
   editor to run them against the judge.
## Approaches used

- **Interleaving** - weave each clone node in right after its original, so
  the `random` link can be copied with pointer arithmetic, then split the
  lists apart again. O(n) time, O(1) extra space.
- **Hash map** - remember `original -> clone` while creating the nodes,
  then wire `next` and `random` through the map. O(n) time, O(n) space.
