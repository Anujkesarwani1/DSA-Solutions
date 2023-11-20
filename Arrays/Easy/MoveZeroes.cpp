// Coding Platform  & Leetcode

// Problem: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

vector<int> moveZeros(int n, vector<int> a)
{
    int zeros = 0;
    vector<int> ans;
    for (auto it : a)
    {
        if (it != 0)
            ans.push_back(it);
        else
            zeros++;
    }
    for (int i = 0; i < zeros; i++)
        ans.push_back(0);
    return ans;
}
