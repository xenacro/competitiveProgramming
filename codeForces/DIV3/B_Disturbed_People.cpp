#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int r=0,s=0,l=0;
    bool z=false;
    for(int i=1; i<n-1; i++) {
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1){
            r++;
            z=true;
            cout<<"r="<<i<<endl;
        }
        else if(z && i!=n-2 && a[i]==1 && a[i-1]==0 && a[i+1]==0 && a[i+2]==1){
            s++;  
            cout<<"s="<<i;
            z=false;
        }
        else 
            z=false;
    }
    if(r)  
        cout<<r<<s;
    else 
        cout<<r;
}