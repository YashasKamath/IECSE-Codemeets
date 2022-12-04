class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),high=m*n-1,low=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(matrix[mid/n][mid%n]==target) return true;
            else if(matrix[mid/n][mid%n]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};