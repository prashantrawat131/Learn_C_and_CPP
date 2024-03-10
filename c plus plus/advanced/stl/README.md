# STL (Standard Template Library)
This library consist of various data structure implementations which are very helpful in writing efficient code.

Following are some of the data structures:
<!-- Provide a link for my vector.cpp file inside this folder -->
- [Vector](./vector.cpp)
- [List](./list.cpp)
- [Stack](./stack.cpp)
- [Queue](./queue.cpp)
- [Priority Queue](./priority_queue.cpp)
- [Deque](./deque.cpp)
- [Set](./set.cpp)
- [Map](./map.cpp)
- [Multiset](./multiset.cpp)

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


## References
- [GeeksForGeeks](https://www.geeksforgeeks.org/cpp-stl-tutorial/)