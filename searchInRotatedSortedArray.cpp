#include<iostream>
using namespace std;

int search(int *nums, int n, int target){
    int low = 0, high = n-1;
    
    while (low<=high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        

        if (nums[low] <= nums[mid]){
            if (nums[low] <= target && target < nums[mid])
                high = mid-1;
            else
                low = mid+1;
        }else{
            if (nums[mid] < target && target <= nums[high])
                low = mid+1;    
            else
                high = mid-1;
        }
    }
    return -1;
}

int main(){
    int nums[7] = {4,5,6,7,0,1,2};
    int target = 2;
    int n = sizeof(nums)/sizeof(int);

    cout << search(nums, n, target) << endl;
    return 0;
}