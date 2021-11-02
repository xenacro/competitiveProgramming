#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        long long int res=0;
        for(long long int i=1; i<n; i++)
            res=__gcd(res,a[i]-a[i-1]);
        if(res==0)
            cout<<"-1\n";
        else 
            cout<<res<<endl;
    }
}