// Coding Ninjas Platform

// Find the Single Element or elements whose frequency is 1.

int getSingleElement(vector<int> &arr)
{
    map<int, int> mp;
    for (auto it : arr)
        mp[it]++;
    for (auto it : mp)
    {
        if (it.second == 1)
            return it.first;
    }
    return -1;
}
