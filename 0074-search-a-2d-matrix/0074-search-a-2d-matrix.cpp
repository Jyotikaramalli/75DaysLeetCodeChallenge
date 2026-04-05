class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        for(int i=0;i<m;i++)
        {
            int n = matrix[i].size();
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j] == target)
                {
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};