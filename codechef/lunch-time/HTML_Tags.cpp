#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool r=true;
        if(s.size()>3 && s[0]=='<' && s[1]=='/' && s.back()=='>'){
            for (int i = 2; i < s.size() - 1; i++){
                if (s[i]<'0')
                    r = false;
                else if(s[i]>'9'&&s[i]<'a')
                    r=false;
                else if(s[i]>'z')
                    r=false;
            }
        }
        else 
            r=false;
        if(r)
            cout<<"Success"<<endl;
        else 
            cout<<"Error"<<endl;
    }
}