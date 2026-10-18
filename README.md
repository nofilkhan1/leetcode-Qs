# leetcode-Qs

Solutions to LeetCode problems written in C++, one folder per problem.

## Problems

| # | Problem | Difficulty | Approach |
|---|---------|------------|----------|
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | Dummy head, no dummy head, recursion |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | Recursive DFS / level order BFS |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | Medium | Interleaving (O(1) space) |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | Three pointers / recursion |
| 226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | Easy | Recursive swap / level order BFS |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | Easy | Reverse the second half / recursion |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | Medium | Iterative splice / stack |

## Folder layout

    leetcode-Qs/
    |-- README.md
    |-- .gitignore
    |-- docs/                        September 2026 study notes
    |-- leetcode-21/
    |   |-- problem no 21.cpp        Visual Studio project, no dummy head
    |   |-- solutions/               dummy head, no dummy head, recursive
    |   |-- tests/test_cases.md      twenty cases
    |   `-- notes/                   dry run, pitfalls, variants
    |-- leetcode-104/
    |   |-- problem no 104.cpp       Visual Studio project, recursive DFS
    |   |-- solutions/               recursive DFS, level order BFS
    |   |-- tests/test_cases.md      depth cases
    |   `-- notes/                   dry run, pitfalls
    |-- leetcode-138/
    |   |-- README.md
    |   |-- ConsoleApplication1/     Visual Studio solution
    |   |-- solutions/               alternative approaches
    |   |-- notes/                   dry runs and pitfalls
    |   `-- tests/                   test cases
    |-- leetcode-206/
    |   |-- README.md
    |   |-- ConsoleApplication1/     Visual Studio solution
    |   |-- solutions/
    |   |-- notes/
    |   `-- tests/
    |-- leetcode-226/
    |   |-- problem no 226.cpp       Visual Studio project, recursive swap
    |   |-- solutions/               recursive swap, level order BFS
    |   `-- tests/test_cases.md      inversion cases
    |-- leetcode-234/
    |   |-- prob no 234.cpp          Visual Studio project, reverse second half
    |   |-- solutions/               reverse second half, recursive
    |   |-- tests/test_cases.md      nine cases
    |   `-- notes/                   dry run, pitfalls, walkthrough
    `-- leetcode-430/
        |-- problem no 430.cpp       Visual Studio project, iterative splice
        |-- solutions/               splice and stack
        |-- tests/test_cases.md      nine cases
        `-- notes/                   dry run, pitfalls, walkthrough

## Building a Visual Studio solution

1. Open the `.sln` of the problem you want, for example
   `leetcode-21/problem no 21.sln`.
2. Pick `Debug | x64` and press **F5**.
3. The sources are LeetCode-style snippets, paste them into the LeetCode
   editor to run them against the judge.

## Approaches used

- **Merge two sorted lists** - attach the smaller node to a tail, either
  anchored by a dummy node or with the first node picked by hand. The
  recursive form takes the smaller head and recurses on the remainders.
- **Maximum depth of binary tree** - ask both subtrees for their depth
  and add one for the current node, or count finished levels in a
  breadth first walk.
- **Copy list with random pointer** - weave each clone node in right
  after its original so the `random` link can be copied with pointer
  arithmetic, then split the lists apart again. O(n) time, O(1) extra
  space.
- **Reverse linked list** - three pointers walking forwards, or a
  recursive unwind that flips one node per frame.
- **Invert binary tree** - swap the two children of every node and
  recurse into both, or take the nodes level by level from a queue and
  swap them there.
- **Palindrome linked list** - find the middle with slow and fast
  pointers, reverse the second half in place, then compare the two
  halves. The recursive form delivers the second half backwards through
  the call stack instead.
- **Flatten a multilevel doubly linked list** - pull every child chain up
  to sit right after its parent and clear the child pointer, or park the
  interrupted next on a stack and splice one node at a time.

## Complexity cheat sheet

| Problem | Time | Space |
|---------|------|-------|
| 21 (iterative) | O(n + m) | O(1) |
| 21 (recursive) | O(n + m) | O(n + m) |
| 104 (recursive) | O(n) | O(h) |
| 104 (BFS) | O(n) | O(width) |
| 138 (interleaving) | O(n) | O(1) |
| 138 (hash map) | O(n) | O(n) |
| 206 (iterative) | O(n) | O(1) |
| 206 (recursive) | O(n) | O(n) |
| 226 (recursive) | O(n) | O(h) |
| 226 (BFS) | O(n) | O(width) |
| 234 (reverse second half) | O(n) | O(1) |
| 234 (recursive) | O(n) | O(n) |
| 430 (splice) | O(n) flat, O(n * depth) nested | O(1) |
| 430 (stack) | O(n) | O(depth) |

## Progress

- [x] 21 - Merge Two Sorted Lists
- [x] 104 - Maximum Depth of Binary Tree
- [x] 138 - Copy List with Random Pointer
- [x] 206 - Reverse Linked List
- [x] 226 - Invert Binary Tree
- [x] 234 - Palindrome Linked List
- [x] 430 - Flatten a Multilevel Doubly Linked List
- [ ] more problems coming soon
