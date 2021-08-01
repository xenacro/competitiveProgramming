#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n],d[n-1];
        bool tr=true;
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            if(i>0)
                d[i-1]=abs(a[i]-a[i-1]);
        }
        long long int l=2,c=2;
        for(long long int i=0; i<n-2; i++){
            long long int g=__gcd(d[i+1],d[i]);
            if(g>1)
                c++;
            if(c>l)
                l=c;
            if(g<=1)
                c=2;
        }
        for(long long int i=0; i<n-1; i++){
            if(d[i]!=1)
                tr=false;
            // cout<<d[i];
        }
        if(!tr) cout<<l<<endl;
        else cout<<"1 \n";
    }
}