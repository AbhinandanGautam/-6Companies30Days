// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        string ans = "";
        if(s.size()==0){
            return s;
        }
        ans += tolower(s[0]);
        for(int i=1; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                ans += " ";
                ans += tolower(s[i]);
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends