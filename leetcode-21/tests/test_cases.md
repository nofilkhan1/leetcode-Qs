# Test cases - LeetCode 21

Twenty cases to run against every approach before submitting.
## 1. Both lists empty

    list1 = []
    list2 = []
    output = []
## 2. First list empty

    list1 = []
    list2 = [0]
    output = [0]
## 3. Second list empty

    list1 = [1, 2]
    list2 = []
    output = [1, 2]
## 4. One node each

    list1 = [2]
    list2 = [1]
    output = [1, 2]
## 5. The classic example

    list1 = [1, 2, 4]
    list2 = [1, 3, 4]
    output = [1, 1, 2, 3, 4, 4]
## 6. No overlap at all

    list1 = [1, 2, 3]
    list2 = [4, 5, 6]
    output = [1, 2, 3, 4, 5, 6]
## 7. Full interleave

    list1 = [1, 3, 5]
    list2 = [2, 4, 6]
    output = [1, 2, 3, 4, 5, 6]
## 8. Everything in list1 is smaller

    list1 = [1, 2, 3]
    list2 = [90, 91]
    output = [1, 2, 3, 90, 91]
## 9. Everything in list2 is smaller

    list1 = [90, 91]
    list2 = [1, 2, 3]
    output = [1, 2, 3, 90, 91]
