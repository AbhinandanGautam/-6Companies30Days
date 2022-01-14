// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	vector<string> ans;
	queue<string> q;
	q.push("1");
	
	for(int i=1; i<=N; i++){
	    string s = q.front();
	    q.pop();
	    q.push(s + "0");
	    q.push(s + "1");
	    ans.push_back(s);
	}
	
	return ans;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends