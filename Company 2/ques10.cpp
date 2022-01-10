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

	void matchPairs(char nuts[], char bolts[], int n) {
	    set<char> s;
	    for(int i=0; i<n; i++){
	        s.insert(nuts[i]);
	    }
	    
	    for(int i=0; i<n; i++){
	        if(s.find('!')!=s.end()){
	            nuts[i] = '!';
	            bolts[i] = '!';
	            s.erase(s.find('!'));
	        }
	        else if(s.find('#')!=s.end()){
	            nuts[i] = '#';
	            bolts[i] = '#';
	            s.erase(s.find('#'));
	        }
	        else if(s.find('$')!=s.end()){
	            nuts[i] = '$';
	            bolts[i] = '$';
	            s.erase(s.find('$'));
	        }
	        else if(s.find('%')!=s.end()){
	            nuts[i] = '%';
	            bolts[i] = '%';
	            s.erase(s.find('%'));
	        }
	        else if(s.find('&')!=s.end()){
	            nuts[i] = '&';
	            bolts[i] = '&';
	            s.erase(s.find('&'));
	        }
	        else if(s.find('*')!=s.end()){
	            nuts[i] = '*';
	            bolts[i] = '*';
	            s.erase(s.find('*'));
	        }
	        else if(s.find('@')!=s.end()){
	            nuts[i] = '@';
	            bolts[i] = '@';
	            s.erase(s.find('@'));
	        }
	        else if(s.find('^')!=s.end()){
	            nuts[i] = '^';
	            bolts[i] = '^';
	            s.erase(s.find('^'));
	        }
	        else{
	            nuts[i] = '~';
	            bolts[i] = '~';
	            s.erase(s.find('~'));
	        }
	    }
	}

};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution obj;
    char nuts[5] = {'@', '%', '$', '#', '^'};
    char bolts[5] = {'%', '@', '#', '$', '^'};
    obj.matchPairs(nuts,bolts,5);

return 0;
}