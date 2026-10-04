# Dry run - [[7,null],[13,0],[11,4],[10,2],[1,0]]

## After step 1, clone the values only

    original: 7 -> 13 -> 11 -> 10 -> 1
    clone:    7 -> 13 -> 11 -> 10 -> 1

## After step 2, interleave

    7 -> 7' -> 13 -> 13' -> 11 -> 11' -> 10 -> 10' -> 1 -> 1'

## After step 3, copy the random links

| original | random | clone target (random->next) |
|----------|--------|-----------------------------|
| 7        | null   | null                        |
| 13       | 7      | 7'                          |
| 11       | 10     | 10'                         |
| 10       | 11     | 11'                         |
| 1        | 7      | 7'                          |

## After step 4, split

The interleaved list is pulled apart again and the original list comes
out untouched, with every pointer it started with.
