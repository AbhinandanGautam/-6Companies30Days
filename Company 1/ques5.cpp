#include<bits/stdc++.h>

using namespace std;

#define ull unsigned long long
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
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set <long long int> s;
	    s.insert(1);
	    n--;
	    while(n--){
	        auto it = s.begin();
	        long long int x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    } 
	    return *s.begin();
	}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    cout<<obj.getNthUglyNo(10)<<endl;

return 0;
}

