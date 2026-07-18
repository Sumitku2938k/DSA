#include<iostream>
#include<vector>
using namespace std;

// Brute Force Approach - O(n^2)
// pair<int,int> pairSum(vector<int> vec1, int target){
//     for (int i = 0; i < vec1.size(); i++)
//     {
//         for (int j = i+1; j < vec1.size(); j++)
//         {
//             int sum = vec1[i]+vec1[j];
//             if (sum == target)
//             {
//                 cout << "Target Found\n";
//                 return {i,j};
//             }
//         }
//     }
//     cout << "Target Not Found\n";
//     return {-1, -1};
// }

vector<int> pairSum(vector<int> arr, int target){
    int st=0, end=arr.size()-1;
    int currSum = 0;
    vector<int> ans;

    while (st < end)
    {
        currSum = arr[st] +  arr[end];
        if (currSum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }else if (currSum > target)
        {
            end--;
        }else{
            st++;
        }
    }
}

int main(){
    vector<int> vec1={2,7,11,15};
    int target = 9;

    vector<int> ans = pairSum(vec1, target);
    cout<<"ans[0]= "<<ans[0]<<", ans[1]= "<<ans[1];
    return 0;
}