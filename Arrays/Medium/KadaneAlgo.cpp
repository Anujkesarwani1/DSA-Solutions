// Coding Ninjas

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Kadane's Algorithm
long long maxSubarraySum(vector<int> arr, int n)
{
    // Kadane's Algorithms
    long long sum = 0;
    long long maxi = 0;
    for (auto it : arr)
    {
        sum += it;
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
