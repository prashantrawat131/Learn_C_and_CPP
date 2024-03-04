#include <iostream>
using namespace std;

class Car
{
public:
    char model;
};

int main()
{
    /* Single value */
    double *dptr = NULL;
    dptr = new double;
    *dptr = 10.02;
    cout << "Value of dptr: " << *dptr << endl;
    delete dptr;

    /* 1D array */
    char *cptr = NULL;
    cptr = new char[100];
    for (int i = 0; i < 100; i++)
    {
        cptr[i] = 'A' + i;
    }
    cout << "Value's at cptr: " << cptr << endl;
    delete[] cptr;

    /* 2D array */
    int ROW = 2, COL = 3;
    int **matrix = new int *[ROW];
    for (int i = 0; i < COL; i++)
    {
        matrix[i] = new int[COL];
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            matrix[i][j] = i + j;
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < COL; i++)
    {
        delete[] matrix[i];
    }

    /* Object */
    Car *cars = new Car[10];
    for (int i = 0; i < 10; i++)
    {
        cars[i].model = (char)('A' + i);
        cout << cars[i].model << " ";
    }
    cout << "\n";
    delete[] cars;

    return 0;
}