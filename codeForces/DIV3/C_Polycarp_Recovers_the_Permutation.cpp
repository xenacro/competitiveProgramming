#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        if(a[0]!=n&&a[n-1]!=n) cout<<"-1\n";
        else if(a[0]==n){ 
            reverse(a.begin(), a.end() - 1);
            for (auto it : a) cout << it << " ";
            cout << endl;
        }
        else {
            reverse(a.begin() + 1, a.end());
            for (auto it : a) cout << it << " ";
            cout << endl;
        }
    }
}