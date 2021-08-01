#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        unordered_map<int, int> umap;
        for(int i=0; i<n; i++)
            umap[a[i]]++;
        int count=0;
        for (auto it : umap) {
            if (it.second >= k) 
                count += k;
            else
                count += it.second;
        }
        cout<<count/k<<endl;
    }
}