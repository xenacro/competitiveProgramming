#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int g=0;
        string s;
        cin>>s;
        bool p=false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'&&!p){
                g++;
                p=true;
            }
            else if(s[i]=='0')
                p=false;
        }
        cout<<g<<endl;
    }
}