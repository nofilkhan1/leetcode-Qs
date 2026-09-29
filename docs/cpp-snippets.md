# C++ snippets - September 2026

Small pieces of code worth remembering.

## Day 1 - Array basics

```cpp
unordered_map<int,int> seen;
```
## Day 2 - Two pointers

```cpp
while (l < r && !isalnum(s[l])) l++;
```
## Day 3 - Two pointers on arrays

```cpp
int area = min(h[l], h[r]) * (r - l);
```
## Day 4 - Sliding window

```cpp
seen[s[r]] = r + 1;
```
## Day 5 - Prefix sums

```cpp
unordered_map<int,int> count{{0,1}};
```
## Day 6 - Binary search

```cpp
int mid = l + (r - l) / 2;
```
## Day 7 - Rotated binary search

```cpp
if (nums[l] <= nums[mid]) { ... }
```
## Day 8 - Linked list basics

```cpp
ListNode* next = curr->next;
```
## Day 9 - Merging lists

```cpp
ListNode dummy, *tail = &dummy;
```
## Day 10 - Cycle detection

```cpp
while (fast && fast->next) { ... }
```
## Day 11 - Two pointers on lists

```cpp
for (int i = 0; i < n; i++) fast = fast->next;
```
## Day 12 - Arithmetic on lists

```cpp
int sum = a + b + carry;
```
## Day 13 - Cycle entry point

```cpp
while (p1 != p2) { p1 = p1->next; p2 = p2->next; }
```
## Day 14 - Stacks

```cpp
st.push(c);
```
## Day 15 - Expression stacks

```cpp
long b = st.top(); st.pop();
```
## Day 16 - Monotonic stacks

```cpp
while (!st.empty() && t[st.top()] < t[i]) { ... }
```
## Day 17 - Queues

```cpp
if (out.empty()) while (!in.empty()) { ... }
```
## Day 18 - Circular buffers

```cpp
rear = (rear + 1) % k;
```
## Day 19 - Hash map internals

```cpp
vector<list<pair<int,int>>> buckets;
```
## Day 20 - Frequency counting

```cpp
int count[26] = {0};
```
## Day 21 - Sets

```cpp
unordered_set<int> seen;
```
## Day 22 - Sorting

```cpp
while (l <= m && r <= n) { ... }
```
## Day 23 - Custom comparators

```cpp
sort(v.begin(), v.end());
```
## Day 24 - Heaps

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```
## Day 25 - Priority queues

```cpp
vector<vector<int>> freq(n + 1);
```
## Day 26 - Backtracking

```cpp
if (used[i]) continue;
```
## Day 27 - Subsets

```cpp
for (int mask = 0; mask < (1 << n); mask++)
```
## Day 28 - Recursion limits

```cpp
queue<TreeNode*> q; q.push(root);
```
## Day 29 - Revision

```cpp
// plan first, code second
```
