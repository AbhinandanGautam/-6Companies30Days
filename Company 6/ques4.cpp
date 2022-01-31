// { Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    int cnt = 0;
    
    void solve(int i, int j, int a, int b){
        if(i==a-1 && j==b-1){
            cnt++;
            return;
        }
        
        if(i>=a || j>=b){
            return;
        }
        
        solve(i+1,j,a,b);
        solve(i,j+1,a,b);
    }
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        solve(0,0,a,b);
        return cnt;
    }
};


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends