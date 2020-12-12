#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,p=0;
    cin>>n >>k;
    int a[n],b[k];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]==a[i])
                a[j]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0){
            p++;
        }
    }
    if(p>=k){
        cout<<"YES"<<endl;
        for(int i=0; i<n && k!=0; i++){
            if(a[i]!=0){
                cout<<i+1<<" ";
                k--;
            }
        }
    }else
        cout<<"NO";
}