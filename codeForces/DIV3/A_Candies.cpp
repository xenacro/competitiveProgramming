#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int tn=3;
        for(int i=4; tn<n && n%tn; i*=2)
            tn+=i;
        cout<<n/tn<<endl;
    }
}