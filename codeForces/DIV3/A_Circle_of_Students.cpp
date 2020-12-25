#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,dc=0,i,c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n; i++)
            cin>>a[i];
        if(n==1)
            cout<<"YES"<<endl;
        else {
            for(i=0; i<n-1; i++)
                if(a[i+1]-a[i]!=1 && a[i+1]-a[i]!=-1){
                    dc=i;
                    c++;
                }
            if(dc==0 || (dc==n-2 && c<2))
               cout<<"YES"<<endl;
            else if(a[dc]-a[dc-1]==a[dc+2]-a[dc+1] && c<2)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
    }
}