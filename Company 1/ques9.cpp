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
    string printMinNumberForPattern(string S){
        string ans;
        stack<int> st;
        int num = 1;
        for(auto it:S){
            if(it == 'D'){
                st.push(num);
                num++;
            }else{
                st.push(num);
                num++;
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty()){
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    cout<<obj.printMinNumberForPattern("IIDDD")<<endl;

return 0;
}