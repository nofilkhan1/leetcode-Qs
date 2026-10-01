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
- **Day 19:** forgot to resize once the load factor grew: double the buckets
- **Day 20:** built a map for a fixed alphabet: an array of 26 is enough
- **Day 21:** compared set sizes instead of the insert result: check the bool return
- **Day 22:** overwrote the left half while merging: copy into a temp buffer first
- **Day 23:** sorted by end and the sweep broke: sort by start first
- **Day 24:** pushed everything and sorted at the end: keep the heap bounded to k
- **Day 25:** wrong comparator on the pair sort: order by count descending
- **Day 26:** forgot to unchoose and generated duplicates: undo right after returning
- **Day 27:** pruned a branch that was still valid: only cut when the prefix is impossible
- **Day 28:** assumed the judge allows deep recursion: rewrite it as a loop
- **Day 29:** skipped the edge case walk through: list them before submitting
- **Day 30:** left the mistakes file unreviewed for a week: read it every Sunday
- **Day 31:** returned a node from the original list: build the clone separately
