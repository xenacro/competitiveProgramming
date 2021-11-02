#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,i=0;
    cin>>t;
    while(i<t){
        cout<<"Case #"<<++i<<": ";
        string s;
        int n,d,c,m,i=0,idx=-1;
        cin>>n>>d>>c>>m>>s;
        bool yes=false;
        for(i=0; i<n; i++) if (s[i]=='D') idx=i;
        if(idx==-1) cout <<"YES"<< endl;
        else {
            for(i=0; i<n; i++){
                if(s[i]=='C'&&c>0) c--;
                else if(s[i]=='C'&&c==0) break;
                if(s[i]=='D'&&d>0){
                    if(i==idx) yes=true;
                    d--;
                    c+=m;
                }
                else if(s[i]=='D'&&d==0) break;
            }
            yes ? cout << "YES" : cout << "NO";
            cout << endl;
        }
    }
}