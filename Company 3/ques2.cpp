// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool CycleDet(int u, vector<int>& vis, vector<int>& stack, vector<vector<int>>& adj){
        stack[u] = 1;
        if(!vis[u]){
            vis[u] = 1;
            for(auto i : adj[u]){
                if(!vis[i] && CycleDet(i,vis,stack,adj)){
                    return true;
	            }
	            
	            if(stack[i]==1){
	                return true;
	            }
            }
        }
        stack[u] = 0;
        return false;
    }

	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    vector<vector<int>> adj(N);
	    for(int i=0; i<pre.size(); i++){
	        adj[pre[i].first].push_back(pre[i].second);
	    }
	    
	    bool cycle = false;
	    vector<int> vis(N,0);
	    vector<int> stack(N,0);
	    
	    for(int i=0; i<N; i++){
	        if(!vis[i] && CycleDet(i,vis,stack,adj)){
	            cycle = true;
	        }
	    }
	    
	    return !cycle;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends