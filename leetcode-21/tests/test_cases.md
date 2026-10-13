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
## 10. Only equal values

    list1 = [5, 5]
    list2 = [5, 5]
    output = [5, 5, 5, 5]
## 11. Duplicates inside one list

    list1 = [1, 1, 2]
    list2 = [1]
    output = [1, 1, 1, 2]
## 12. One long list, one short

    list1 = [1]
    list2 = [0, 2, 3, 4, 5, 6, 7, 8]
    output = [0, 1, 2, 3, 4, 5, 6, 7, 8]
## 13. Second list exhausted first

    list1 = [1, 2, 3, 4, 5]
    list2 = [0]
    output = [0, 1, 2, 3, 4, 5]
## 14. Zeros and negatives

    list1 = [-3, -1, 0]
    list2 = [-2, 0, 2]
    output = [-3, -2, -1, 0, 0, 2]
## 15. Large values

    list1 = [1000000000]
    list2 = [999999999, 1000000001]
    output = [999999999, 1000000000, 1000000001]
