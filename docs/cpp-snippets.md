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
