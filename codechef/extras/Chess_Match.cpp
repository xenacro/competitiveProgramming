#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,r;
        cin>>n>>a>>b;
        if(n%2){
            r=360+(2*(n/2))+(2*((n+1)/2));
        }
        else 
            r=360+(2*n);
        // cout << r;
        if (a + b < r)
            cout<<r-a-b<<endl;
        else 
            cout<<0<<endl;
    }
}