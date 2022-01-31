#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& prob, int start, int end) {
        vector<vector<pair<int, double>>> adj(n);
        for(int i=0; i<edges.size(); i++) 
        {
            adj[edges[i][0]].push_back({edges[i][1], prob[i]});
            adj[edges[i][1]].push_back({edges[i][0], prob[i]});   
        }
        
        //initialize values
        vector<double> dist(n, (double)0.0);
        priority_queue<pair<double, int>> pq; //use of max heap
        pq.push({1.0, start});
        dist[start]=1.0;
        
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(auto v:adj[u])
            {
                if(dist[u]*v.second>dist[v.first])
                {
                    dist[v.first]=dist[u]*v.second;
                    pq.push({dist[v.first], v.first});
                }
            }
        }
        
        return dist[end];
        
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> edges = {{0,1},{1,2},{0,2}};
    vector<double> succProb = {0.5,0.5,0.2};

    Solution obj;
    cout<<obj.maxProbability(3,edges,succProb,0,2);

return 0;
}