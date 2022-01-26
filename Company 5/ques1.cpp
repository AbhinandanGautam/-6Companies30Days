// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int solve(int arr[], int n, int sum){
       bool dp[n+1][sum+1];
        for(int i=0;i<sum+1;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
            
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j)
                {
                    dp[i][j]=  dp[i-1][j-arr[i-1]] or dp[i-1][j];
                }
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        int diff = INT_MAX;
     
        for (int j = sum / 2; j >= 0; j--) {
            if (dp[n][j] == true) {
                diff = sum - 2 * j;
                break;
            }
        }
        return diff;
    }
      
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int sum = 0;
	    for(int i=0; i<n; i++){
	        sum+=arr[i];
	    }
	    return solve(arr,n,sum);
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends