class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int ans=INT_MIN, m=matrix.size(), n=matrix[0].size();
        for(int i=0;i<n;i++){
            vector<int> temp(m,0);
            for(int j=i; j<n; j++){
                for(int k=0; k<m; k++) temp[k]+=matrix[k][j];
                int csum=0, t=INT_MIN;
                set<int> s;
                s.insert(0);
                for(int sum: temp){
                    csum+=sum;
                    set<int>::iterator it = s.lower_bound(csum-k);
                    if(it != s.end()) t=max(t, csum-*it);
                    s.insert(csum);
                }
                ans = max(ans, t);
            }
        }
        return ans;
    }
};