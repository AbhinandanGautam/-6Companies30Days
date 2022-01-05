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

    int n; // no. of numbers
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;

        if(pq.size()==10){
            if(pq.top()<a){
                pq.pop();
                pq.push(a);
            }
        }else{
            pq.push(a);
        }
    }
    cout<<"Max 10 numbers : ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

return 0;
}