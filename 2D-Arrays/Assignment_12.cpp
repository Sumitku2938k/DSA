#include <iostream>
using namespace std;

//Print the number of all 7’s that are in the 2d array. 
int printAllSeven(int arr[][3], int n, int m){
    int count = 0;
    for (int i = 0; i< n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 7){
                count++;
            }
        }
    }
    return count;
}

// Print out the sum of the numbers in the second row of the “nums” array.
int printSumOfSecondRow(int arr[][3], int n, int m) {
    if (n < 2)
        return 0;

    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += arr[1][j];
    }

    return sum;
}

// Write a program to Find Transpose of a Matrix.
void transposeMatrix(int mat[][3], int n, int m){
    int newMat[m][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            newMat[j][i] = mat[i][j];
        }
    }
    cout << "New Transpose Matrix \n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << newMat[i][j] << " ";
        }
        cout<<endl;
    }
}

// Convert 1D Array Into 2D Array
void convert1DTo2D(int arr1D[], int size, int m, int n) {
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1D[i] << " ";
    }
    if (size != m * n)
    {
        cout << "\nIncompatible dimensions!" << endl;
        return;
    }
    int arr2D[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2D[i][j] = arr1D[n*i + j];
        }
    }
    cout << "\nNew 2D Array: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr2D[i][j] <<" "; 
        }
        cout<<endl;
    }
}

//Rotate Image -> first transpose the og matrix then replace the elem of 1st col with last col, 2nd col with 2nd last col
void rotateImage(int arr[][3], int n, int m) {
    transposeMatrix(arr, 3, 3);\
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            temp  = arr[i][m-1-j];
            arr[i][m-1-j] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    cout << "\nNew Rotate Image: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j] <<" "; 
        }
        cout<<endl;
    }
    
}


int main()
{
    int arr[2][3] = {{4,7,8}, 
                    {8,8,7}}; 

    cout << "No of all 7's are : " << printAllSeven(arr, 2, 3) << endl;

    int nums[3][3] = {{1,4,9}, 
                    {11,4,3}, 
                    {2,2,3}}; 
    
                    cout << "sum of the numbers in the second row is : " << printSumOfSecondRow(nums, 3, 3) << endl;
    
    int mat[2][3] = {{1, 2, 3},
                    {4, 5, 6}};

    transposeMatrix(mat, 2, 3);

    int arr1D[] = {1, 2, 3, 4};
    int size = sizeof(arr1D)/sizeof(int);

    convert1DTo2D(arr1D, size, 2, 2);

    int arr2D[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    
    rotateImage(arr2D, 3, 3);
    return 0;
}