// Coding Ninjas Platform

// Find the Union

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    set<int> st;
    for (auto it : a)
        st.insert(it);
    for (auto it : b)
        st.insert(it);
    vector<int> ans;
    for (auto it : st)
        ans.push_back(it);
    return ans;
}