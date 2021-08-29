#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        k--;
        for(long long int i=0; i<n; i++){
            cin>>a[i];
        }
        // long long int maxi = distance(a, max_element(a,a+n));
        // if(maxi<k)
        //     cout<<0<<endl;
        // else {
        //     // long long int bpos = maxi-k;
        //     cout<<n-maxi<<endl;
        // }
        vector<long long int> posh;
        long long int max = *max_element(a, a + n);
        for(long long int i=0; i<n; i++){
            if(a[i]==max)
                posh.push_back(i);
        }
        long long int r=0;
        for(long long int i=0; i<posh.size(); i++){
            if(posh[i]>=k)
                r+=(n-posh[i]);
        }
        cout<<r<<endl;
    }
}