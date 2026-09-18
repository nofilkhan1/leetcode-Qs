# Bug diary

The bug of the day and how it was fixed.

- **Day 1:** off by one iterating a 0-indexed array: start at 0 and stop before n
- **Day 2:** compared characters without lowercasing: fold to lower first
- **Day 3:** moved both pointers and missed the best pair: move only the shorter
- **Day 4:** reset the whole window instead of shifting left to lastSeen + 1
- **Day 5:** forgot the initial zero entry: seed the map with zero to one
- **Day 6:** wrote l < r but returned r: keep the bounds consistent
- **Day 7:** checked the wrong half for the target: test which side is sorted first
- **Day 8:** lost the rest of the list by overwriting next: save next first
- **Day 9:** special cased a null result: let the dummy absorb it
- **Day 10:** dereferenced a null fast pointer: check fast and fast->next first
- **Day 11:** forgot the list can be exactly n long: handle a null fast
- **Day 12:** dropped the final carry node: keep looping while carry is non zero
- **Day 13:** assumed the meeting node was the entry: walk both from head and meet
- **Day 14:** checked the size before checking emptiness: test empty first
- **Day 15:** swapped the operand order on subtraction: pop b then a
- **Day 16:** popped equal values and lost the first match: pop only while strictly less
- **Day 17:** transferred on every pop: only move when the out stack runs dry
- **Day 18:** used the same index for full and empty: keep one slot unused
