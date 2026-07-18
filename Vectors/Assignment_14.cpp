#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
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

vector<vector<int>> threeSum(vector<int> nums) {
    set<vector<int>> st;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    return vector<vector<int>>(st.begin(), st.end());
}

int main(){
    // vector<int> nums = {1,2,2,4};

    // vector<int> ans = setMismatch(nums);
    // cout<<"duplicate= "<<ans[0]<<", missing= "<<ans[1];
    
    // vector<int> height = {1,8,6,2,5,4,8,3,7};
    // cout << "Max Area = " << containerWithMostWater(height) << endl;
    
    vector<int> nums = {-1,0,1,2,-1,-4};

    vector<vector<int>> ans = threeSum(nums);
    cout << "Triplets are: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}