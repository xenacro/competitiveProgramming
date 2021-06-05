#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r=1,s=1;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++){
        if(a[i]<=2*a[i-1])
            r++;
        else if(r>s){
            s=r;
            r=1;
        }
        else 
            r=1;
    }
    if(r>s)
        s=r;
    cout<<s;
}