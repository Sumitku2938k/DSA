#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);

    // Inbuilt sort function (Ascending order)
    // sort(arr, arr+n);

    // Inbuilt sort function (Descending order)
    sort(arr, arr+n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}