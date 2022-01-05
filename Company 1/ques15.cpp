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
    bool canPair(vector<int> arr, int k) {
        unordered_map<int,int> mp;
        
        int n = arr.size();
        if(n % 2 != 0) return false;
        
        for(int i=0;i<n;i++){
            mp[arr[i] % k]++;
        }
        
        for(int i=0;i<n;i++){
            
            int rem1 = arr[i] % k;
            
            if(rem1 == 0){
                if(mp[rem1] % 2 != 0) return false;
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 and mp[rem1] % 2 != 0) return false;
                if(mp.find(rem2) == mp.end()) return false;
                if(mp[rem1] != mp[rem2]) return false;
            }
            
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vi arr = {9,5,3,7};
    Solution obj;
    cout<<obj.canPair(arr,6)<<endl;

return 0;
}