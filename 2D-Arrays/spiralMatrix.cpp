#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m) // no of cols should be specified
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // Top  
        for (int j = scol; j <= ecol; j++)
        {
            cout << mat[srow][j] << " ";
        }

        // Right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }

        // Bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow) //middle
            {
                break;
            }
            cout << mat[erow][j] << " ";
        }

        // Left
        for (int i = erow - 1; i > srow; i--)
        {
            if (srow == erow) //middle
            {
                break;
            }
            cout << mat[i][scol] << " ";
        }

        srow++; scol++; 
        erow--; ecol--;
    }
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    spiralMatrix(matrix, 4, 4);
    
    cout<<"\n";

    int matrix2[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};

    spiralMatrix(matrix2, 3, 4);
    return 0;
}