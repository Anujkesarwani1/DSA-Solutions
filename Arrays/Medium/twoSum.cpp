// Coding Ninjas

// Input: n = 5, nums = [2, 7, 9, 11, 15], target = 9
// Output: YES

string read(int n, vector<int> book, int target)
{
    sort(book.begin(), book.end());
    int i = 0, j = book.size() - 1;
    while (i <= j)
    {
        int val = book[i] + book[j];
        if (val == target)
        {
            return "YES";
        }
        else if (val > target)
            j--;
        else
            i++;
    }
    return "NO";
}
