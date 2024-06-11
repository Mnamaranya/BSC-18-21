#include <iostream>
using namespace std;

void dynamicDoubleArray(int rows, int columns);
int main()
{
    
    int dime = 0;
    int rows;
    int columns;

    cout
        << "Enter number of dimensions: ";
    cin >> dime;
    if (dime >= 3)
    {
        cout << "invalid input" << endl;
    }
    else if (dime > 0 && dime <= 2)
    {

        dynamicDoubleArray(dime, dime);
    }
    else
    {
        cout << "number cannot be 0 or negative" << endl;
    }

    return 0;
}

void dynamicDoubleArray(int rows, int columns)
{
    
    double arr[rows][columns];
    

    
    int rowNum = sizeof(arr) / sizeof(arr[0]);
    

    
    int colNum = sizeof(arr) / sizeof(arr[0][0]);
    
    int n = colNum / rowNum;

    
    for (int i = 0; i < rowNum; i++)
    {
        cout << "Enter values for row: " << i << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    
    cout << "Elements of the array: ";
    for (int i = 0; i < rowNum - 1; i++)
    {
        for (int j = 0; j < colNum; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}
