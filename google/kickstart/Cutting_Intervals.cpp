#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,itr=1;
    cin>>t;
    while(itr<=t){
        cout<<"Case #"<<itr<<": ";
        itr++;
        long long int n,c,res=0;
        cin>>n>>c;
        long long int l[n],r[n],d[n];
        for(long long int i=0; i<n; i++){
            cin>>l[i]>>r[i];
            d[i]=r[i]-l[i];
        }
        
        cout<<res<<endl;
    }
}