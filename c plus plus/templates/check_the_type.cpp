#include <iostream>

template <typename T>
T concat(T x, T y)
{
    if (std::is_same<T, int>::value)
    {
        std::cout << "It is an integer\n";
        // return results according to integer
    }
    else if (std::is_same<T, std::string>::value)
    {
        // return results according to string
        std::cout << "It is a string\n";
    }
    // similiary we can check for others

    return x;
}

int main()
{
    concat<int>(1, 2);
    concat<std::string>("Apple", "banana");
    return 0;
}

/*

Output:
It is an integer
It is a string

*/