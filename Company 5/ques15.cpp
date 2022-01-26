#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = 1000000000;
        while(lo <= hi){
            int k = (lo+hi)/2;
            int H = 0;
            for(int i=0; i<piles.size(); i++){
                H += ceil(1.0*piles[i]/k);
            }
            
            if(H>h){
                lo = k+1;
            }else{
                hi = k-1;
            }
        }
        
        return lo;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    Solution obj;
    cout<<obj.minEatingSpeed(piles,h);

return 0;
}