#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    cout << "Enter the number of rows not more than 3: ";
    cin >> rows;
    while (rows > 3) 
    {
        cout << "Error: Number of rows cannot exceed 3. Please re-enter: ";
        cin >> rows;
    }

    cout << "Enter the number of columns not more than 3: ";
    cin >> cols;
    while (cols > 3) 
    {
        cout << "Error: Number of columns cannot exceed 3. Please re-enter: ";
        cin >> cols;
    }

    double* array = new double[rows * cols];
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i)

        for (int j = 0; j < cols; ++j)
            cin >> array[i * cols + j];
        
    cout << "Values of each element of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << array[i * cols + j] << " ";
        cout << endl;
    }

    delete[] array;
    return 0;
}
