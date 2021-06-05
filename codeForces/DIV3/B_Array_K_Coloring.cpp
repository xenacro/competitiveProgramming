#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> countFreq(int arr[], int n){
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    return mp;
}

int maxReturn(unordered_map<int, int> mp){
    int r=0;
    for (auto& x : mp)
        if (r < x.second)
            r = x.second;
    return r;
}
int maxReturnKey(unordered_map<int, int> mp)
{
    int r = 0, re=0;
    for (auto& x : mp)
        if (r < x.second){
            r = x.second;
            re = x.first;
        }
    return re;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
        b[i]=0;
    }
    unordered_map<int, int> mp = countFreq(a,n);
    if(k<maxReturn(mp))
        cout << "NO";
    else {
        cout << "YES"<<endl;
        int re = 1, ren = k;
        unordered_map<int, int> xp;
            for(int j=0; j<n; j++){
                if(b[j]==0){
                    b[j]=++xp[a[j]];
                }
            }
        for(int i=1; i<=k; ++i){
            unordered_map<int, int> zp;
            int *p = find(b, b + n, i);
            if (p == b+n) {
                        zp = countFreq(b, n);
                        int *lp = find(b, b + n, maxReturnKey(zp));
                        if(lp!=b+n)
                            *lp = i;
            }
        }
        for (int i=0; i<n; i++)
            cout<<b[i]<<" ";
    }
}