// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    long long int mySqrt(int n) {
        int start = 0,  end = n;
        long long int mid = start + (end - start)/2;
        long long int ans = -1;
        while (start <= end)
        {
            long long int sq = mid * mid;
            if (sq == n)
            {
                return mid;
            }
            if (sq < n)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
             end = mid - 1;   
            }
            mid = start + (end - start)/2;
        }
        return ans;
        
    }
};
