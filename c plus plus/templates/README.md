# Templates in C++

### Some points to remember:

- The keyword 'template' and 'typename' are used to declare a template.

- The 'template' is a keyword that tells the compiler that what follows is a template declaration.

- The 'typename' keyword is used to declare a template type parameter.

- The 'typename' keyword can be replaced with the 'class' keyword.

- Automatic type deduction is done by the compiler only in C++17 and later. For example:

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    auto result = add(1, 2);
    return 0;
}
```

Here the compiler will deduce the type of 'result' as 'int'. We didn't have to specify the type of 'result' explicitly like this:

```cpp
int result = add<int>(1, 2);
```
