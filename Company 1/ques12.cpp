// no. of squares in n*n chess board;
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    cout<< "No. of squares = "<<(n*(n+1)*(2*n+1))/6<<endl;

return 0;
}