#include<iostream>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT16_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout<<"Maximum Subarray Sum = "<<maxSum<<endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);

    return 0;
}