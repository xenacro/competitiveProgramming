#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,o=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        int d[n];
        for(int i=0; i<n; i++)
            d[i]=a[i]-a[0];
        for(int i=0; i<n; i++)
            if(d[i]%2)
                o++;
        if(o)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}