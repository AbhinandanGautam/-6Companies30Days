#include<bits/stdc++.h>
using namespace std;

class Solution { 
    bool dfs(vector<int> &ans, int target, int i) {
        if (i == ans.size()) return target == 0;
        int n = ans[i];
        if (dfs(ans, target, i + 1)) return true;
        ans[i] = -n;
        if (dfs(ans, target - n, i + 1)) return true;
        ans[i] = n;
        return false;
    }
public:
    vector<int> recoverArray(int n, vector<int>& A) {
        int mn = *min_element(begin(A), end(A));
        for (int &n : A) n += -mn;
        multiset<int> s(begin(A), end(A)), tmp;
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            tmp.clear();
            int num = *next(s.begin());
            ans.push_back(num);
            while (s.size()) {
                int first = *s.begin();
                tmp.insert(first);
                s.erase(s.begin());
                s.erase(s.find(first + num));
            }
            swap(s, tmp);
        }
        dfs(ans, -mn, 0);
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v = {-3,-2,-1,0,0,1,2,3};
    Solution obj;
    vector<int> res = obj.recoverArray(3,v);

    for(auto i : res){
        cout<<i<<" ";
    }
    cout<<endl;

return 0;
}