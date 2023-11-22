// Coding Ninjas
// Reverse Words in a String

// Input: Str = "Anuj Kesarwani"
// Output: Str = "Kesarwani Anuj"

#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str)
{
    vector<string> ans;
    istringstream iss(str);
    string word;

    while (iss >> word)
        ans.push_back(word);
    string st = "";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        st += ans[i];
        if (ans[i] != 0)
            st += " ";
    }
    return st;
}
