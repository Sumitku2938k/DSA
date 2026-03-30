#include<iostream>
using namespace std;

void binarySort(int *arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(int);

    binarySort(arr, n);

    return 0;
}