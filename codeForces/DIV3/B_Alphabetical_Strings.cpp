#include <bits/stdc++.h>

using namespace std;

bool myLogic(string s,int i, int j){
    if(i==j&&s[i]=='a')
        return true;
    if(s[i]=='a'+j-i)
        return myLogic(s,i+1,j);
    if(s[j]=='a'+j-i)
        return myLogic(s,i,j-1);
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(myLogic(s,0,s.length()-1))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}