#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char p = 'B';
        if(s[0]=='?'&&s[1]=='B')
            p='R';
        for(int i=0; i<n; i++){
            if(s[i]=='?')
                s[i]=p;
            if(s[i]=='B')
                p='R';
            else 
                p='B';
        }
        cout<<s<<endl;
    }
}