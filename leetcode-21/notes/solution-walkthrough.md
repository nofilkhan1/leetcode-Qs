# Walkthrough - problem no 21.cpp

The solution that ships in the Visual Studio project, explained line by
line. It is the no dummy head version.
## Lines 16 to 20: the empty list guards

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

Merging with an empty list is just the other list, no work needed.
