/*Matrix is a 2D array of numbers in rows and columns. Various operations such as Addition, Subtraction, and Multiplication can be performed on the matrices.
Pre-requisite for matrix multiplication:
~ The number of columns of the 1st matrix must equal the number of rows of the 2nd matrix.
The result will have the same number of rows as 1st matrix & the same number of columns as 2nd matrix.
Multiplication of m×n matrix by n×p matrix equals m×p matrix.
*/
#include <iostream>
using namespace std;
int main()
{
    int A[10][10], B[10][10], C[10][10], r1, r2, c1, c2, i, j, k;
    cout << "Enter the number of rows and columns of matrix A:";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of matrix B:";
    cin >> r2 >> c2;

    if (c1 == r2)
    {
        cout << "Enter the value of elements of matrix A:\n";
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cin >> A[i][j];
            }
        }

        cout << "Enter the value of elements of matrix B:\n";
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cin >> B[i][j];
            }
            cout << "\n";
        }

        // printing matrix A

        cout << "The matrix A is:\n";
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }

        // printing matrix B

        cout << "The matrix B is:\n";
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << B[i][j] << " ";
            }
            cout << "\n";
        }

        // calculating matrix C

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }

        // printing matrix C

        cout << "The multiplied matrix C is:\n";
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << C[i][j] << "  ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "The matrices cannot be multiplied";
    }
    return 0;
}