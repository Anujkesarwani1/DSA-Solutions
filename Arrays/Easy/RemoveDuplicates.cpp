// Remove Duplicates from Sorted Array

// Approach 1 (Leetcode)
int removeDuplicates(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    nums.clear();
    for (auto &it : mp)
    {
        nums.push_back(it.first);
    }
    sort(nums.begin(), nums.end());
    return nums.size();
}

// Approach 2 (Coding Ninjas)
int removeDuplicates(vector<int> &arr, int n)
{
    set<int> st;
    for (auto it : arr)
        st.insert(it);
    return st.size();
}