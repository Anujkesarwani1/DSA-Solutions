// Leetcode

// Problem: Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + (nums.size() - k));
    reverse(nums.begin() + (nums.size() - k), nums.end());
    reverse(nums.begin(), nums.end());
}

// Coding Ninjas

// Problem: Given an array 'arr' with 'n'elements, the task is to rotate the array to the left by 'k'steps, where 'k' is non-negative.>

// Example:

// 'arr = [1,2,3,4,5]
// 'k' = 1 rotated array = [2,3,4,5,1]
// 'k' = 2 rotated array = [3,4,5,1,2]
// 'k' = 3 rotated array = [4,5,1,2,3) and so on.

vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}
