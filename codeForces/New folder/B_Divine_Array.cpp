#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector <vector<long long int>> a;
        // long long int a[n];
        for(long long int i=0; i<n; i++) cin>>a[0][i];
        long long int q,pointer=1;
        cin>>q;
        unordered_map <long long int, long long int> umap;
        for(long long int i=0; i<n; i++) umap[a[0][i]]++;
        while(q--){
            long long int x,k;
            cin>>x>>k;
            if(a[k].size()>0) cout<<a[k][x-1]<<endl;
            else {
                while(pointer<=k){
                    for(long long int i=0; i<n; i++){
                        a[pointer][i]=umap[a[pointer-1][i]];
                        umap[a[pointer-1][i]]=0;
                    }
                    for(long long int i=0; i<n; i++) umap[a[pointer][i]]++;
                    pointer++;
                }
                cout<<a[k][x-1]<<endl;
            }
        }
    }
}