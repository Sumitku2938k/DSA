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

int containerWithMostWater(vector<int> height){
    int currArea = 0, maxArea = 0;

    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i+1; j < height.size(); j++)
        {
            int width = j - i;
            int length  =  min(height[i], height[j]);

            currArea = length * width;
            maxArea = max(maxArea, currArea);
        }
    }
    return maxArea;
}

int main(){
    // vector<int> nums = {1,2,2,4};

    // vector<int> ans = setMismatch(nums);
    // cout<<"duplicate= "<<ans[0]<<", missing= "<<ans[1];
    
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max Area = " << containerWithMostWater(height) << endl;
    return 0;
}