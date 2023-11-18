// Largest Element in the Array
int largestElement(vector<int> &arr, int n)
{
    int maxi = 0;
    for (auto it : arr)
        maxi = max(it, maxi);
    return maxi;
}
