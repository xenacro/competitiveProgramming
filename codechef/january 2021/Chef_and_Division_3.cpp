#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        int a[n],s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s/k<=d)
            cout<<s/k<<endl;
        else 
            cout<<d<<endl;
    }
}