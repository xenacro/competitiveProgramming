#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[3]={0,0,0};
        for(int i=0; i<s.length(); i++)
            a[s[i]-'A']++;
        if(a[0]+a[2]==a[1])
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}