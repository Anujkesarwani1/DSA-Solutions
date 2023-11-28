// Coding Ninjas or Leetcode

// Search target is present in the matrix or not in a optimal ways.
// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true

bool searchElement(vector<vector<int>> &MATRIX, int target)
{
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    int row = 0, col = m - 1;
    while (row < n && col >= 0)
    {
        if (MATRIX[row][col] == target)
            return true;
        else if (MATRIX[row][col] > target)
            col -= 1;
        else
            row += 1;
    }
    return false;
}
