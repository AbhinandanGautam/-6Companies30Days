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

string encode(string src)
{ 
    if(src.size()==0){
        return src;
    }
    string res = "";
    int cnt=0;
    res+= src[0];
    for(int i=0; i<src.size(); i++){
        if(src[i]==res[res.size()-1]){
            cnt++;
        }else{
            res += to_string(cnt);
            res += src[i];
            cnt = 1;
        }
    }
    res += to_string(cnt);
    
    return res;
}     

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "aaaabbbccccc";
    string ans = encode(s);

    cout<<ans<<endl;

return 0;
}