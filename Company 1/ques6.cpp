#include<bits/stdc++.h>
#include<numeric>

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
    string gcdOfStrings(string s1, string s2) {
        return (s1 + s2 == s2 + s1) ? s1.substr(0, __gcd(s1.size(), s2.size())) : "";
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    cout<<obj.gcdOfStrings("ABCABC","ABC")<<endl;;

return 0;
}