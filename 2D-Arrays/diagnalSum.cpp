#include <iostream>
using namespace std;

void diagnalSum(int mat[][4], int n){
    int sum = 0;

    for (int i = 0; i < n; i++) // O(n^2)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) //pd
            {
                sum += mat[i][j];
            }else if (j == n-i-1) //sd
            {
                sum += mat[i][j];
            }
        }
    }

    cout<<"Sum = "<<sum<<endl;
    
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    diagnalSum(matrix, 4);

    return 0;
}