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
