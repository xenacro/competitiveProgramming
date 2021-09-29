#include <bits/stdc++.h>

using namespace std;

int main(){
    int itr=1,t;
    cin>>t;
    while(itr<=t){
        cout<<"Case #"<<itr++<<": ";
        int n,c=0;
        string s;
        cin>>n;
        char one='1';
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]!='1'){
                size_t prf=s.substr(0,i).find_last_of(one),nxf=s.substr(i, n-i).find(one);
                int pr=n,nx=n;
                if(prf!=string::npos)pr=i-prf;
                if(nxf!=string::npos)nx=nxf;
                // cout<<i<<" "<<pr<<" "<<nx<<endl;
                c+=min(pr, nx);
            }
        }
        cout<<c<<endl;
    }
}