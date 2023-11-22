// Coding Ninjas
// Maximum Nesting Depth Of The Paraentheses

// Input: S = '1+(3*6+(9-3))'
// Output: 2

int maxDepth(string s)
{
    int cnt = 0, maxCnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            cnt++;
        else if (s[i] == ')')
            cnt--;
        maxCnt = max(maxCnt, cnt);
    }
    return maxCnt;
}
