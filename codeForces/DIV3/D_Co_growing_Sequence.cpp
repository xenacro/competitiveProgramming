#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=0;
        }
        for(int i=1; i<n; i++){
            int f=a[i-1]^b[i-1],p=0;
            while(int(f/pow(2,p++)));
            int fi=pow(2,p-1)-1;
            while(fi<a[i])
                fi=pow(2,p++)-1;
            b[i]=a[i]^fi;
        }
        for(int i=0; i<n; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}