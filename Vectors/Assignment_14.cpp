#include<iostream>
#include<vector>
using namespace std;

vector<int> setMismatch(vector<int> nums){
    vector<int> ans;
    
    for (int i = 0; i < nums.size(); i++)
    {
        int temp = nums[i];
        if (temp != i+1)
        {
            ans.push_back(temp);
            ans.push_back(i+1);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,2,4};

    vector<int> ans = setMismatch(nums);
    cout<<"duplicate= "<<ans[0]<<", missing= "<<ans[1];
    return 0;
}