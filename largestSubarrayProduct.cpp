#include<iostream>
using namespace std;

int maxSubArrayProduct (int *arr, int n){
    int currMax = arr[0];
    int currMin = arr[0];
    int ans = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(currMax, currMin);
        }
        currMax = max(currMax * arr[i], arr[i]);
        currMin = min(currMin * arr[i], arr[i]);
        
        ans = max(ans, currMax);
    }
    return ans;
}

int main(){
    int arr[] = {2,3,-2,4};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Maximum Subarray Product = "<<maxSubArrayProduct(arr, n)<<endl;

    return 0;
}