#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        vector<int> posH;
        for(int i=1; i<n; i++)
            if(a[i]<a[i-1])
                posH.push_back(i-1);
        // cout<<posH.size()<<endl;
        int nS = a[n-1]<a[n-2] ? posH.size()+1 : posH.size();
        if (nS <= k)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}