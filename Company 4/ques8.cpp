// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n=str.length();
       int ans=0;
       if(str[0]=='-')
       {
           for(int i=1;i<n;i++)
           {
               if(!(str[i]>='0' && str[i]<='9'))
               {
                   return -1;
               }
           }
       }
       else{
           for(int i=0;i<n;i++)
           {
               if(!(str[i]>='0' && str[i]<='9'))
               {
                   return -1;
               }
           }
       }
       
       return stoi(str);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends