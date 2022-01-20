// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    int solve(vector<int>&A, vector<vector<int>>& dp, int i, int j){
        if(i==j){
            return A[i];
        }
        if(i>j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int c1 = A[i] + min(solve(A,dp,i+2,j),solve(A,dp,i+1,j-1));
        int c2 = A[j] + min(solve(A,dp,i+1,j-1),solve(A,dp,i,j-2));
    
        dp[i][j] = max(c1,c2);
        return dp[i][j];
    }
    
    int maxCoins(vector<int>&A,int n)
    {
	    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
	    
	    return solve(A,dp,0,n-1);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends