// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>> ans;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int st=j+1;
                int end=n-1;
                
                while(st<end){
                    if(arr[i]+arr[j]+arr[st]+arr[end] > k){
                        end--;
                    }
                    else if(arr[i]+arr[j]+arr[st]+arr[end] < k){
                        st++;
                    }
                    else{
                        ans.insert({arr[i],arr[j],arr[st],arr[end]});
                        st++;
                    }
                }
            }
        }
        
        vector<vector<int>> res;
        for(auto i:ans)
        {
            res.push_back(i);
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends