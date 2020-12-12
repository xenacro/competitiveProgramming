#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        int k=i;
        for(int j=i+1; j<n; j++){
            if(a[j]==a[k] && a[j]!=0){
                a[k] = 0;
                k = j;
                m++;
            } 
        }
    }
    cout<<n-m<<endl;
    for(int i=0; i<n; i++){
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
}