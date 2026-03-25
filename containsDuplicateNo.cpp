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
                return 1;
            }
            
        }
        
        return 0;
    }
    
}

int main(){
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr)/sizeof(int);

    cout << containsDuplicate(arr, n) << endl;

    return 0;
}