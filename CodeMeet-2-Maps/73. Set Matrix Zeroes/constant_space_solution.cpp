class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),flagrow=0,flagcol=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(!matrix[i][j]){
                    if(!i) flagrow=1;
                    if(!j) flagcol=1;
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                matrix[i][j]=!matrix[i][0] || !matrix[0][j] ? 0 : matrix[i][j];
        if(flagrow) 
            for(int i=0;i<n;i++) matrix[0][i]=0;
        if(flagcol) 
            for(int i=0;i<m;i++) matrix[i][0]=0;
        
    }
};
