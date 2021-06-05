#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n],c[k],d[k],r=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0; i<k; i++){
        r+=a[n-1-i];
        c[i]=a[n-1-i];
    }
    cout<<r<<endl;
    if(k!=1){
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                if(c[i]==b[j]){
                    d[i]=j;
                    b[j]=0;
                    break;
                }
            }
        }
        sort(d,d+k);
        r=0;
        cout<<d[0]+1<<" ";
        r+=(d[0]+1);
        for(int i=1; i<k-1; i++){
            cout<<d[i]-d[i-1]<<" ";
            r+=(d[i]-d[i-1]);
        }
        cout<<n-r;
    }
    else 
        cout<<n;
}