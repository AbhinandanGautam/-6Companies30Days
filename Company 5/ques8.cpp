#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res = 0;
    
        for (int i = 0; i < points.size(); ++i) {

            unordered_map<long, int> group(points.size());

            for (int j = 0; j < points.size(); ++j) {

                if (j == i) continue;

                int dy = points[i][1] - points[j][1];
                int dx = points[i][0] - points[j][0];

                int key = dy * dy;
                key += dx * dx;

                ++group[key];
            }

            for (auto& p : group) {
                if (p.second > 1) {
                    res += p.second * (p.second - 1);
                }
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
    vector<vector<int>> v = {{1,1},{2,2},{3,3}};
    cout<<obj.numberOfBoomerangs(v);

return 0;
}