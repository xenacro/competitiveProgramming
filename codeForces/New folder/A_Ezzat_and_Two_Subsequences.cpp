#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        long double rSum=0;
        for(int i=0; i<n-1; i++){
            rSum+=a[i];
        }
        // int maxi=0;
        // for(int i=1; i<n; i++){
        //     if(a[i]>a[maxi])
        //         maxi=i;
        // }
        // long double rSum=0;
        // for(int i=0; i<n; i++){
        //     if(i!=maxi)
        //         rSum+=a[i];
        // }
        cout<<fixed<<setprecision(9)<<(rSum/(n-1))+a[n-1]<<endl;
    }
}