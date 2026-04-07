#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void binarySort(int *arr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j] < arr[j+1])
//             {
//                 swap(arr[j], arr[j+1]);
//             }
            
//         }
//     }
//     printArray(arr, n);   
// }

void selectionSort(int *arr, int n){
    cout << "Selection Sort: " << endl;
    for (int i = 0; i < n-1; i++)
    {
        int maxIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
            
        }
        swap(arr[i], arr[maxIdx]);
    }
    printArray(arr, n);
}

int main(){
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr)/sizeof(int);

    // binarySort(arr, n);
    selectionSort(arr, n);

    return 0;
}