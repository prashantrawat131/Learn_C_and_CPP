## Smart Pointers

C++ doesn't have garbage collection, so it's the programmer's responsibility to manage memory. Smart pointers are objects that manage the memory of a pointer. They automatically delete the memory when it's no longer needed.

### Types of Smart pointers in C++

1. **unique_ptr**: It is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope. But only one unique_ptr can own the resource at a time.

2. **shared_ptr**: It is a smart pointer that retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object. The object is destroyed and its memory deallocated when either of the following happens:

   - the last remaining shared_ptr owning the object is destroyed.
   - the last remaining shared_ptr owning the object is assigned another pointer via operator= or reset().

3. **weak_ptr**: It is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by shared_ptr. It must be converted to shared_ptr in order to access the referenced object. The weak_ptr do not contribute to the reference count of the object so when all shared_ptr to the object are destroyed, the object is deleted even if there are weak_ptr pointing to it. This is useful to prevent circular references which can cause memory leaks.


> Note: Another smart pointer is **auto_ptr** but it is deprecated in C++11 and removed in C++17.