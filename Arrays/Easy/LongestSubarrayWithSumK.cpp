// Coding Ninjas

// Problem: You are given an array 'a'of size 'n'and an integer 'k'. Find the length of the longest subarray of 'a' whose sum is equal to 'k'.
// Example:
// Input: 'n' = 7 'k = 3 'a' = [1, 2, 3, 1, 1, 1, 1]
// Output: 3

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int i = 0, j = 0;
    int ans = 0;
    long long sum = a[0];
    while (j < a.size())
    {
        if (sum > k)
        {
            while (i <= j && sum > k)
            {
                sum -= a[i];
                i++;
            }
        }
        if (sum == k)
        {
            ans = max(ans, j - i + 1);
        }
        j++;
        sum += a[j];
    }
    return ans;
}
