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
    int orangesRotting(vector<vector<int>>& grid) {
        int ct=0, res=-1;
        queue<vector<int>> q;
        
        vector<vector<int>> dir={{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j]>0) ct++;
                if(grid[i][j]==2) q.push({i, j});
            }
        }
        
        while(!q.empty()) {
            res++;
            int size=q.size();
            for(int k=0;k<size;k++) {
                vector<int> cur=q.front();
                ct--;
                q.pop();
                for(int i=0;i<4;i++) {
                    int x=cur[0]+dir[i][0], y=cur[1]+dir[i][1];
                    if(x>=grid.size()||x<0||y>=grid[0].size()||y<0||grid[x][y]!=1){
                        continue;
                    }
                    grid[x][y]=2;
                    q.push({x, y});
                }
            }
        }
        
        if(ct==0){
            return max(0, res);
        }
        
        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vvi v = {{2,1,1}, {1,1,0}, {0,1,1}};
    Solution obj;
    cout<<obj.orangesRotting(v);

return 0;
}