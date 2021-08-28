#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0; i<n; i++)
            cin>>a[i];
        long long int minVal = a[0];
        for(long long int i=1; i<n; i++)
            minVal = minVal&a[i];
        cout<<minVal<<endl;
    }
}