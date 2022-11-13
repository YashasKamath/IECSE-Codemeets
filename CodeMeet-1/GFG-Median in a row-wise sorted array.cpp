
class Solution{ 
public:
    int count_greater(vector<int> &vg,int target){  
        int st=0, end=vg.size()-1;
        while(st<=end){
            int mid = (end + st) / 2;
            if(vg[mid] <= target) st = mid + 1;
            else end = mid - 1;
        }
        return st;
    }
    
    int median(vector<vector<int>> &matrix, int r, int c){
        int low=0;
        int high=1e9;
        while(low <= high){
            int mid = (high + low) / 2, cnt = 0;
            for(int i = 0; i < r; i++)
                cnt += count_greater(matrix[i],mid);
            if(cnt <= (r * c) / 2) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }

 

};
