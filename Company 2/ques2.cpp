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
    int longestMountain(vector<int>& A) {
        int N = A.size(), res = 0;
        
        vector<int> up(N, 0);
        vector<int> down(N, 0);
        
        for (int i = N - 2; i >= 0; --i){
            if(A[i] > A[i + 1]){
                down[i] = down[i + 1] + 1;
            }
        }
        
        for (int i = 0; i < N; ++i) {
            if(i > 0 && A[i] > A[i - 1]){
                up[i] = up[i - 1] + 1;
            }
            if(up[i] && down[i]){
                res = max(res, up[i] + down[i] + 1);
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    vi a = {2,1,4,7,3,2,5};
    cout<<obj.longestMountain(a);

return 0;
}