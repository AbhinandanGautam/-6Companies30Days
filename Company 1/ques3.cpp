// count subarray having product less than K
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

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long product = 1;
        int ans = 0;
        
        for(int st=0,end=0; end<n; end++){
            product *= a[end];
            
            while(st<end && product>=k){
                product /= a[st++];
            }
            
            if(product<k){
                ans += (end-st+1);
            }
        }
        
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    vector<int> a = {1,2,3,4};
    int res = obj.countSubArrayProductLessThanK(a,4,10);

    cout<<res<<endl;

return 0;
}