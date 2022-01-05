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

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        
        // res for storing result 
        vector<vector<string>> res;

        // hash map to store key value pair
        // key is sorted string and value is that string
        unordered_map<string, vector<string>> mp;

        for(int i=0; i<string_list.size(); i++){
            string s = string_list[i];
            sort(s.begin(),s.end());
            mp[s].push_back(string_list[i]);
        }

        for(auto itr : mp){
            res.push_back(itr.second);
        }

        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> words = {"act","god","cat","dog","tac"};

    Solution obj;
    vector<vector<string>> ans = obj.Anagrams(words);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}