#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        graph g = buildGraph(numCourses, prerequisites);
        vector<int> degrees = computeIndegrees(g);
        vector<int> order;
        for (int i = 0; i < numCourses; i++) {
            int j = 0;
            for (; j < numCourses; j++) {
                if (!degrees[j]) {
                    order.push_back(j);
                    break;
                }
            }
            if (j == numCourses) {
                return {};
            }
            degrees[j]--;
            for (int v : g[j]) {
                degrees[v]--;
            }
        }        
        return order;
    }
private:
    typedef vector<vector<int>> graph;
    
    graph buildGraph(int numCourses, vector<vector<int>>& prerequisites) {
        graph g(numCourses);
        for (auto p : prerequisites) {
            g[p[1]].push_back(p[0]);
        }
        return g;
    }
    
    vector<int> computeIndegrees(graph& g) {
        vector<int> degrees(g.size(), 0);
        for (auto adj : g) {
            for (int v : adj) {
                degrees[v]++;
            }
        }
        return degrees;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    vector<vector<int>> v = {{1,0}};
    for(auto i : obj.findOrder(2,v)){
        cout<<i<<" ";
    }
    cout<<endl;

return 0;
}