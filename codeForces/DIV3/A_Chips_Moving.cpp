#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,av=0,r=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2)
            av++;
        else
            r++;
    }
    cout<<min(av,r);
}