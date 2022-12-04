#include <iostream>
#include <vector>
using namespace std;
//first occurance and last occurance of an element
int firstOccurance(int arr[], int k, int n)
{
    int ans = -1;
    int low = 0, high = n;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(arr[mid] == k)
        {
            ans = mid;
            // low = mid+1; // for last occurance
            high = mid-1;
        }
        else if(k < arr[mid]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    
    return ans;
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int k; cin>>k;
    
    cout<<firstOccurance(arr, k, n);
    
    return 0;
}



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