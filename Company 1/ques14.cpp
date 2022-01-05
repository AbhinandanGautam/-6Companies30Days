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
    int minSubArrayLen(int s, vector<int>& nums) {
        int i=0, j=0;
        int minLen=INT_MAX, sum=0;
        while(j<nums.size()){
            if(sum<s) sum+=nums[j];
            j++;
            while(sum>=s){
                if(j-i<minLen)
                    minLen=j-i;
                sum-=nums[i];
                i++;
            }
        }
        return minLen==INT_MAX ? 0 : minLen;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums = {2,3,1,2,4,3};
    Solution obj;
    cout<<obj.minSubArrayLen(7,nums);

return 0;
}