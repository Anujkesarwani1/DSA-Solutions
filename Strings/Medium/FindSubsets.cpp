// Leetcode
// 78. Subsets
// Problem: Given an integer array nums of unique elements, return all possible subsets (the power set).
// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

vector<vector<int>> ans;
void solve(vector<int> nums, vector<int> temp, int low)
{
    if (low == nums.size())
    {
        ans.push_back(temp);
        return;
    }
    solve(nums, temp, low + 1);
    temp.push_back(nums[low]);
    solve(nums, temp, low + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> temp;
    solve(nums, temp, 0);
    return ans;
}
