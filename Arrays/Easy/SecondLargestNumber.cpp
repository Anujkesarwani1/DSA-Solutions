// Second Largest Number in the Array
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    sort(a.begin(), a.end());
    vector<int> ans;
    ans.push_back(a[n - 2]);
    ans.push_back(a[1]);
    return ans;
}