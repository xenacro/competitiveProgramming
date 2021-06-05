/*incomplete*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q,k,l,r,res=0;
    cin>>n>>q>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    while(q--){
        res=0;
        cin>>l>>r;
        for(int i=l; i<=r; i++){
            if(i==1)
                res = a[0]==1 ? res+a[i]-1 : res+a[i]-2;
            else if(i==n-1)
                res=res+k-1-a[n-1];
            else 
                res=res+a[i]-2-a[i-2];
            cout<<res<<",";
        }
        cout<<res<<endl;
    }
}