#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(int low,int high,vector<vector<int>> &dp)
    {
        if(low>=high)
            return 0;
        if(dp[low][high]!=INT_MAX)
            return dp[low][high];
        for(int j=low; j<=high; j++)
        {
            dp[low][high]=min(dp[low][high],max(j+helper(low,j-1,dp),j+helper(j+1,high,dp)));
        }
        return dp[low][high];
    }
    
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,INT_MAX));
        return helper(1,n,dp);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    cout<<obj.getMoneyAmount(10);

return 0;
}