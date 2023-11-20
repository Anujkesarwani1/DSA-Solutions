// Coding Platform

// Left Rotate an Array by one

vector<int> rotateArray(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = 1; i < n; i++)
        ans.push_back(arr[i]);
    ans.push_back(arr[0]);
    return ans;
}