#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int a, b, n, s;
        cin>>a>>b>>n>>s;
        s=a>=(s/n)?s-((s/n)*n):s-(n*a);
        //cout << s;
        s=b>s?s-s:s-b;
        //cout << s;
        if(!s)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}