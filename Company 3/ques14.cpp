// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minSteps(int D){
        int d = 0;
        int cnt=0;
        for(int i=1; ; i++){
            if(d==D){
                return cnt;
            }
            if(d>D && (d-D)%2==0){
                return cnt;
            }
            
            d += i;
            cnt++;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
        
        Solution ob;
        cout<<ob.minSteps(D)<<"\n";
    }
    return 0;
}  // } Driver Code Ends