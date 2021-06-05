#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h, x;
    cin>>n>>h>>x;
    int a[n];
    bool res=false;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(!res && a[i]+x>=h)
            res=true;
    }
    if(res)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}