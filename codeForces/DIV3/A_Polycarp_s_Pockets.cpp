#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m=1;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        b[i]=0;
        for(int j=0; j<n; j++){
            if(a[j]==a[i])
                b[i]++;
        }
    }
    for(int i=0; i<n; i++){
        if(b[i]>m)
            m = b[i];
    }
    cout<<m;
}