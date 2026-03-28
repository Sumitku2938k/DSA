#include<iostream>
using namespace std;

int containsDuplicate(int *arr, int n){
    int newArr[100000];

    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[i];

        for (int j = i+1; j < n; j++)
        {
            if (newArr[i] == arr[j])
            {
                return true;
            }
            
        }
    }
    return false;
    
}

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);

    cout << containsDuplicate(arr, n) << endl;

    return 0;
}