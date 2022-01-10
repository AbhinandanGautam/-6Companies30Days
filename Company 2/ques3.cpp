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
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int> ans;
    
        deque<int> dq(k);
    
        int i;
        for(i = 0; i < k; ++i) {
        
            while ((!dq.empty()) && arr[i] >= arr[dq.back()])
                dq.pop_back();
    
            dq.push_back(i);
        }
    
        for(; i < n; ++i){
        
            ans.push_back(arr[dq.front()]);
    
            while ((!dq.empty()) && dq.front() <= i - k)
                dq.pop_front(); 
    
            while ((!dq.empty()) && arr[i] >= arr[dq.back()])
                dq.pop_back();
    
            dq.push_back(i);
        }
    
        ans.push_back(arr[dq.front()]);
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vi a = {1,2,3,1,4,5,2,3,6};
    Solution obj;
    vi res = obj.max_of_subarrays(a,9,3);
    for(auto i:res){
        cout<<i<<" ";
    }

return 0;
}