#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[2];
        cin>>s[0]>>s[1];
        bool deadFlag=false;
        for(int i=0; i<n; i++){
            if(s[0][i]=='1'&&s[1][i]=='1'){
                deadFlag=true;
                break;
            }
        }
        if(deadFlag)
            cout<<"NO\n";
        else 
            cout<<"YES\n";
    }
}