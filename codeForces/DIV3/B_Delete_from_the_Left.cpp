#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,r;
    cin>>s>>r;
    if(s!=r){
        while(s[s.length()-1]==r[r.length()-1]){
            s.erase(s.end()-1);
            r.erase(r.end()-1);
        }
        cout<<s.length()+r.length();
    }
    else
        cout<<0;
}