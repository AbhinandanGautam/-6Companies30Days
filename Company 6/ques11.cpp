#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
        
        
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={e[i],s[i]};
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
        long long ans=0;
        priority_queue<int,vector<int>,greater<int>> q;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(q.size()<k){
                q.push(v[i].second);
                sum+=v[i].second;
            }
            else{
                if(q.top()<v[i].second){
                    sum-=q.top();
                    q.pop();
                    sum+=v[i].second;
                    q.push(v[i].second);
                }
            }
            
            ans=max(ans,sum*v[i].first);
        }
        
        return ans%1000000007;
        
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

return 0;
}