#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,r=0;
        cin>>n>>k;
        // cout<<k*2*((pow(2,n))-1)<<endl;
        while(k>0){
            if(k<(pow(2,n)-pow(2,n-1))){
                r+=(k*2*((pow(2,n))-1));
            }
            else 
                r+=((pow(2,n)-pow(2,n-1))*2*((pow(2,n))-1));
            k-=(pow(2,n)-pow(2,n-1));
            n--;
        }
        cout<<r<<endl;
    }
}