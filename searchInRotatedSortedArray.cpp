#include<iostream>
using namespace std;

int search(int *nums, int n, int target){
    int low = 0, high = n-1;
    int mid = low + (high-low)/2;

    if(nums[low] <= nums[mid]) {
        for(int i=low; i<=mid; i++){
            if(nums[i]==target){
                return i;
            }
        }
    }else{
        for(int i=mid; i<=high; i++){
            if(nums[i]==target){
                return i;
            }
        }
    }
    return -1;
    
}

int main(){
    int nums[7] = {4,5,6,7,0,1,2};
    int target = 7;
    int n = sizeof(nums)/sizeof(int);

    cout << search(nums, n, target) << endl;
    return 0;
}