// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> ans(2,-1);
       long long sum=0;
       int i=0;
       int j=0;
       while(j<n){
           if((sum+arr[j])==s){
               ans[0]=i+1;
               ans[1]=j+1;
               break;
           }
           else if((sum+arr[j])<s){
               sum+=arr[j];
               j++;
           }
           else{
               sum=sum-arr[i];
               i++;
           }
       }
       if(ans[0]==-1 && ans[1]==-1){
           ans.pop_back();
       }
       return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends