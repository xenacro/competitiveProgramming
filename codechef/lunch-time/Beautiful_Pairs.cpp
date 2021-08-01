#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        unordered_map<long long int, long long int> umap;
        for(long long int i=0; i<n; i++){
            cin>>a[i];
            umap[a[i]]++;
        }
        long long int fs=0;
        for(auto x : umap)
            if(x.second>1)
                fs += (x.second * (x.second-1));
        cout<<(n*n)-n-fs<<endl;
    }
}