#include <bits/stdc++.h>

using namespace std;

int myLogic(string &s){
    int n=s.length(), r=0;
    for(int i=0; i<n-2; i++){
        int j;
        for(j=0; j<3; j++){
            if(s[i+j]!='x')
                break;
        }
        if(j==3){
            r++;
            j=0;
        }
    }
    return r;
}

int main(){
    int n;
    cin>>n;
    string s,t="xxx";
    cin>>s;
    cout<<myLogic(s);
}