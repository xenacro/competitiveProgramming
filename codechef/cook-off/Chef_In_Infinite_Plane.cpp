#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n],count=0;
        unordered_map<long long int, long long int> umap;
        for(long long int i=0; i<n; i++){
            cin>>a[i];
            umap[a[i]]++;
            if(umap[a[i]]>=a[i])
                continue;
            else 
                count++;
        }
        cout<<count<<endl;
    }
}