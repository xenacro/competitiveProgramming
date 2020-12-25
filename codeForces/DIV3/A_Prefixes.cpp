#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i+=2){
        if(s[i]==s[i+1]){
            r++;
            s[i+1]=s[i]=='a'?'b':'a';
        }
    }
    cout<<r<<endl<<s;
}