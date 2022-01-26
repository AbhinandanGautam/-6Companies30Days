#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDays(vector<int>& ws, int tot_cap, int cur_cap = 0, int res = 1) {
      for (auto w : ws) {
        cur_cap += w;
        if (cur_cap > tot_cap) ++res, cur_cap = w;
      }
      return res;
    }
    int shipWithinDays(vector<int>& ws, int D) {
      auto r = accumulate(begin(ws), end(ws), 0);
      auto l = max(r / D, *max_element(begin(ws), end(ws)));
      while (l < r) {
        auto m = (l + r) / 2;
        if (countDays(ws, m) <= D) r = m;
        else l = m + 1;
      }
      return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    vector<int> w = {1,2,3,4,5,6,7,8,9,10};
    int d = 5;
    cout<<obj.shipWithinDays(w,d);

return 0;
}