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
    int res[2];
    int *findTwoElement(int *arr, int n) {
        vector<int> vis(n+1,0);
        vis[0] = 1;
        for(int i=0; i<n; i++){
            if(vis[arr[i]]==1){
                res[0] = arr[i];
            }else{
                vis[arr[i]] = 1;
            }
        }
        
        for(int i=0; i<n+1; i++){
            if(vis[i]==0){
                res[1] = i;
                break;
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
    int arr[2] = {2,2};
    cout<<obj.findTwoElement(arr,2)[0]<<" "<<obj.findTwoElement(arr,2)[1]<<endl;

return 0;
}