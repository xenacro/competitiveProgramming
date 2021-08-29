#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0 ;i<k; i++)
            if(a[i]<0)
                a[i]=-1*a[i];
        sort(a,a+n);
        int r=0;
        for(int i=n-1; i>=0; i--){
            if(a[i]>0)
                r+=a[i];
            else 
                break;
        }
        cout<<r<<endl;
    }
}