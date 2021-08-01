#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int r=(b-a)%x?(((b-a)/x)+1):((b-a)/x);
        cout<<r<<endl;
    }
}