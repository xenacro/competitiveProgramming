#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='1')
            cout<<s[0]<<0<<s.substr(1);
        else 
            cout<<1<<s;
        cout<<endl;
    }
}