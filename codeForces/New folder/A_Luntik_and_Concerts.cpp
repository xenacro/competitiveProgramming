#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        a=a%2;
        b=b%2;
        c=c%2;
        if(a==b&&b==c) cout<<0;
        else if(a==c&&b!=c) cout<<2;
        else if(b==0&&a==0&&c==1) cout<<3;
        else cout<<1;
        cout<<endl;
    }
}