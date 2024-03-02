#include <iostream>
using namespace std;

class MyException : public exception
{
private:
    string msg;

public:
    MyException(const char *msg)
    {
        this->msg = msg;
    }
    const char *what() const throw()
    {
        return "This is my exception.";
    }
};

int main()
{
    try
    {
        int size = 10;
        int arr[size];
        int index = 11;
        if (index >= size)
        {
            throw "Array index out of bound exception";
        }
    }
    catch (const char *msg)
    {
        cout << "Exception happened: " << msg << endl;
    }

    try
    {
        int i = 10;
        while (i >= 0)
        {
            if (i == 0)
            {
                throw MyException("Divide by zero");
            }

            int a = 10 / i;
            i--;
        }
    }
    catch (MyException e)
    {
        cout << "Exception occurred:" << e.what() << endl;
    }
    return 0;
}