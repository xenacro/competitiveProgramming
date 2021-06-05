#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r,ons=0;
    cin>>n>>r;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int cn=0,o[n],f[n],op=0,fp=0,q=0,l=0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            ons++;
            for(int j=i-r+1; j<i+r; j++){
                if(a[j]!=0)
                    l++;
                if(a[j]==0)
                    a[j]=2;
                else if(a[j]==2)
                    a[j]=3;
            }
            if(l==(2*(r-1))+1)
                q++;
                //cout<<l;
            l=0;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==0){
            ons=0;
            q=1;
            break;
        }
    }
    cout<<ons-q<<endl;
    // for(int i=0; i<n; i++)
    //     cout<<a[i];
    // for(int i=0; i<n;i++){
    //     if(a[i]==0)
    //         f[fp++]=i;
    //     else 
    //         o[op++]=i;
    //     //cout<<o[op-1]<<endl;
    // }
    // for(int i=0; i<op;i++)
    //     cout<<o[i]<<endl;
    // cout<<endl;
    // for(int i=0; i<fp; i++)
    //     cout<<f[i]<<endl;
}