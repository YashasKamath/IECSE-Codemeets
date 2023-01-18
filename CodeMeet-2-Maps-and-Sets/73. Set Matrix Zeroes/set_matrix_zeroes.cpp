class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    unordered_map<int,int> row;
    unordered_map<int,int> col;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]++;
                col[j]++;
            }
        }
    }
    for(auto x:row)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            matrix[x.first][j] = 0;
        }
    }
    for(auto x:col)
    {
        for(int j=0;j<matrix.size();j++)
        {
            matrix[j][x.first] = 0;
        }
    }
    }
};