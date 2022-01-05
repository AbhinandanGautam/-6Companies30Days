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
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if(R2[0]<L1[0] || R1[0]<L2[0] || R2[1]>L1[1] || R1[1]>L2[1]){
            return 0;
        }
        
        return 1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L1[2]={0,2};
    int R1[2]={1,1};
    int L2[2]={-2,-3};
    int R2[2]={0,2};
    Solution obj;
    cout<<obj.doOverlap(L1,R1,L2,R2)<<endl;

return 0;
}