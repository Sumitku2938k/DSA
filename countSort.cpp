#include<iostream>
using namespace std;

void countSort(int *arr, int n){
    int freq[100000];
    int minVal = INT16_MAX, maxValue = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }

    // 1st Loop
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++; 
    }

    // 2nd Loop
    for (int i = minVal, j=0; i <= maxValue; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}

int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);

    countSort(arr, n);
    return 0;
}