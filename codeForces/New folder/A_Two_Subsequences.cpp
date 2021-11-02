#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char r=s[0];
        int pointer=0;
        for(int i=0; i<s.length(); i++)
            if(r>=s[i]){
                r=s[i];
                pointer=i;
            }
        cout<<s[pointer]<<" ";
        for(int i=0; i<s.length(); i++)
            if(i!=pointer){
                cout<<s[i];
            }
        cout<<endl;
    }
}