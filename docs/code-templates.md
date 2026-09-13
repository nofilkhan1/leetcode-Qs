# Code templates

A line worth keeping.

## Day 1

```cpp
unordered_map<int,int> seen;
```
## Day 2

```cpp
while (l < r && !isalnum(s[l])) l++;
```
## Day 3

```cpp
int area = min(h[l], h[r]) * (r - l);
```
## Day 4

```cpp
seen[s[r]] = r + 1;
```
## Day 5

```cpp
unordered_map<int,int> count{{0,1}};
```
## Day 6

```cpp
int mid = l + (r - l) / 2;
```
## Day 7

```cpp
if (nums[l] <= nums[mid]) { ... }
```
## Day 8

```cpp
ListNode* next = curr->next;
```
## Day 9

```cpp
ListNode dummy, *tail = &dummy;
```
## Day 10

```cpp
while (fast && fast->next) { ... }
```
## Day 11

```cpp
for (int i = 0; i < n; i++) fast = fast->next;
```
## Day 12

```cpp
int sum = a + b + carry;
```
## Day 13

```cpp
while (p1 != p2) { p1 = p1->next; p2 = p2->next; }
```
