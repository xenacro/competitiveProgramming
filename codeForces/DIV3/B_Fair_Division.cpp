/*1472*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],p=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n && a[i]==1; i++)
            p++;
        if((n-p)%2 && p%2==0 && p>0)
            cout<<"YES"<<endl;
        else if((n-p)%2)
            cout<<"NO"<<endl;
        else if(p%2)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}