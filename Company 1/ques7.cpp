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

int lastPosition(int n, int m, int k)
{
    if (m <= n - k + 1)
        return m + k - 1;
 
    m = m - (n - k + 1);
 
    return (m % n == 0) ? n : (m % n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<lastPosition(5,8,2);

return 0;
}