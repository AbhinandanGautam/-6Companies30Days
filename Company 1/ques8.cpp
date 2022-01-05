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

class Solution {
	public:
		int CountWays(string str){
            
            // if starting char is 0 then return 0
		    if(str[0]=='0'){
                return 0;
            }

            int n = str.size();
            long long int mod = 1e9+7;
            vector<long long int> dp(n+1,0);

            dp[0] = dp[1] = 1;

            for(int i=1; i<n; i++){
                if(str[i]=='0' && str[i-1]>'2'){
                    return 0;
                }
            }

            for(int i=2; i<=n; i++){
                if(str[i-1]>'0'){
                    dp[i] = dp[i-1];
                }

                if(str[i-2]=='1' || (str[i-2] == '2' && str[i-1] < '7')){
                    dp[i] += dp[i-2];
                }

                dp[i] %= mod;
            }

            return (int)dp[n];
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    cout<<obj.CountWays("1234")<<endl;

return 0;
}