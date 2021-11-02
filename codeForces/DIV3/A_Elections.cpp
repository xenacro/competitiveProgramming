#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int maxV=max(a[0],max(a[1],a[2]));
        int dif[3]={maxV-a[0],maxV-a[1],maxV-a[2]},zF=0;
        for(int i=0; i<3; i++)
            if(dif[i]==0)zF++;
        if(zF>1)
            maxV++;
        // for(int i=0; i<3; i++){
        //     if(maxV==a[i])
        //         cout<<
        // }
        if(maxV==a[0])
            cout<<0<<" ";
        else if(zF>1)
            cout<<maxV-a[0]<<" ";
        else 
            cout<<maxV-a[0]+1<<" ";
        if(maxV==a[1])
            cout<<0<<" ";
        else if(zF>1)
            cout<<maxV-a[1]<<" ";
        else 
            cout<<maxV-a[1]+1<<" ";
        if(maxV==a[2])
            cout<<0<<endl;
        else if(zF>1)
            cout<<maxV-a[2]<<endl;
        else 
            cout<<maxV-a[2]+1<<endl;
        // cout<<maxV-a[0]<<" "<<maxV-a[1]<<" "<<maxV-a[2]<<endl;
    }
}