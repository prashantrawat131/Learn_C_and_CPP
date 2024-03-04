#include <iostream>

namespace caller1
{
    void call()
    {
        std::cout << "Call using caller 1\n";
    }
}

namespace caller2
{
    void call()
    {
        std::cout << "Call using caller 2\n";
    }
}

using namespace caller2;

int main()
{
    caller1::call();
    caller2::call();

    /* This will use call() of caller2
    because we have this line 'using namespace caller2' */
    call();
    return 0;
}