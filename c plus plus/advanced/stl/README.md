# STL (Standard Template Library)

This library consist of various data structure implementations which are very helpful in writing efficient code.

Following are some of the data structures:

<!-- Provide a link for my vector.cpp file inside this folder -->

- [Vector](./data_structures/vector.cpp)
- [List](./data_structures/list.cpp)
- [Stack](/data_structures./stack.cpp)
- [Queue](/data_structures./queue.cpp)
- [Priority Queue](./data_structures/priority_queue.cpp)
- [Deque](./data_structures/deque.cpp)
- [Set](./data_structures/set.cpp)
- [Map](./data_structures/map.cpp)
- [Multiset](./data_structures/multiset.cpp)

## Some common knowledge

### 1) Iterator functions

Most of the data structures have iterator functions which are used to iterate through the data structure. This is a sample implementation of iterator function for vector:

```vector<int>::iterator itr = v.begin();
    while (itr != v.end())
    {
        cout << *itr << " ";
        itr++;
    }
```

### 2) Order of storing element

Some data structures store elements in sorted order. For example, set stores elements in sorted order. But by default they store in ascending order. If you want to store in descending order, you can use the following code:

```
set<int, greater<int>> s;
```

## STL Algorithms
This file [algorithms.cpp](./algorithms/algorithms.cpp) contains examples of some of the most used algorithms in STL.

## References

- [STL Data Strucutes](https://www.geeksforgeeks.org/cpp-stl-tutorial/)

- [STL Algorithms](https://www.geeksforgeeks.org/c-magicians-stl-algorithms/)

