#include <iostream>

using namespace std;

// global constants
const int rows = 2;
const int columns = 3;

void printMatrix(int matrix[rows][columns])
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
            cout << matrix[row][col] << " ";
        cout << endl;
    }
}

int main()
{
    // 1-d Array: have one set of values.

    int matrix[rows][columns] = {
        {11, 12, 13},
        {21, 22, 23}};
        
    printMatrix(matrix);
    // don't need to pass the size of the array.

    return 0;
}
