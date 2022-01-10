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

string ans = "";

void printParenthesis(int i, int j, int n, int* bracket, char& name)
{
    if (i == j) {
        ans += name++;
        return;
    }

    ans += "(";
    printParenthesis(i, *((bracket + i * n) + j), n, bracket, name);
    printParenthesis(*((bracket + i * n) + j) + 1, j, n, bracket, name);
    ans += ")";
}

void matrixChainOrder(int p[], int n)
{
    int m[n][n];

    int bracket[n][n];

    
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++) 
        {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) 
            {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) 
                {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }

    char name = 'A';
    printParenthesis(1, n - 1, n, (int*)bracket, name);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p[3] = {3,3,3};
    matrixChainOrder(p,3);

    cout<<ans<<endl;

return 0;
}