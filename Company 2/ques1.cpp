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
    int maxProfit(int k, int n, int price[]) {
        
        int profit[k + 1][n + 1];

        
        for (int i = 0; i <= k; i++)
            profit[i][0] = 0;

        
        for (int j = 0; j <= n; j++)
            profit[0][j] = 0;

        
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j < n; j++) {
                int max_so_far = INT_MIN;

                for (int m = 0; m < j; m++)
                    max_so_far = max(max_so_far, price[j] - price[m] + profit[i - 1][m]);

                profit[i][j] = max(profit[i][j - 1], max_so_far);
            }
        }

        return profit[k][n - 1];
    }
};

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    int a[4] = {20,580,420,900};
    cout<<obj.maxProfit(3,4,a);

return 0;
}
