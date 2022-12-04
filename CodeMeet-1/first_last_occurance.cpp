// for those wanting to try the given problem on gfg 
// problem link https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
// control click the above link or copy paste it in your browser to solve the question
//vector code
vector<int> find(int arr[], int n , int x )
{
        int s = 0, e = n;
        int target = x;
    vector<int> ans(2, -1);
    //first occurrence
    while(s <= e){
        int m = s + (e-s)/2;
        if(arr[m] < target)
            s = m+1;
        else if(arr[m] > target)
            e = m-1;
        else{
            if(m == s || arr[m] != arr[m-1]){
                ans[0] = m;
                break;
            }
            else{
                e = m-1;
                ans[0] = m-1;
            }
        }
    }

    //last occurrence
    s = 0, e = n;
    while(s <= e){
        int m = s + (e-s)/2;
        if(arr[m] < target)
            s = m+1;
        else if(arr[m] > target)
            e = m-1;
        else{
            if(m == e || arr[m] != arr[m+1]){
                ans[1] = m;
                break;
            }
            else{
                s = m+1;
                ans[1] = m+1;
            }
        }
    }
    return ans; 

}
