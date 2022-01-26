#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<bool>& vis, int i){
        if(vis[i]){
            return;
        }
        vis[i] = true;
        for(auto j : adj[i]){
            if(!vis[j]){
                dfs(adj,vis,j);
                vis[j] = true;
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& C) {
        vector<vector<int>> adj(C.size());
        for(int i=0; i<C.size(); i++){
            for(int j=0; j<C[i].size(); j++){
                if(C[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<bool> vis(C.size(),false);
        
        int cnt=0;
        
        for(int i=0; i<C.size(); i++){
            if(!vis[i]){
                dfs(adj,vis,i);
                cnt++;
            }
        }
        
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> v = {{1,1,0},{1,1,0},{0,0,1}};
    Solution obj;
    cout<<obj.findCircleNum(v);

return 0;
}