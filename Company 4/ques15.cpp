#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;

    string v1="";
    string v2="";

    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='.'){
            continue;
        }
        v1 += s1[i];
    }

    for(int i=0; i<s2.size(); i++){
        if(s2[i]=='.'){
            continue;
        }
        v2 += s2[i];
    }

    if(stoi(v1)>stoi(v2)){
        cout<<s1<<endl;
    }
    else{
        cout<<s2<<endl;
    }

return 0;
}