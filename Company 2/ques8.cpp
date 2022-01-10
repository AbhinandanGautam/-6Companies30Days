#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define pb push_back

const int N = 1e5+2, MOD = 1e9+7;

class Solution
{
    public:
    map<int,int> dp;
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int n)
    {
        if(dp.find(n) != dp.end()){
            map<int,int> :: iterator it;
            it = dp.find(n);
            return it->second;
        }
        if(n==0){
            return dp[0]=0;
        }
        if(n==1 || n==2){
            return dp[n]=n;
        }
        
        if(n%2==0){
            dp[n] = countWays(n-1) + 1;
        }else{
            dp[n] = countWays(n-1);
        }
        
        return dp[n];
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    cout<<obj.countWays(4);

return 0;
}