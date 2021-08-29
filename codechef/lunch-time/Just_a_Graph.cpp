#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        set<long long int> st;
        for(long long int i=0; i<n; i++){
            cin>>a[i];
            st.insert(a[i]-i);
        }
        cout<<n-st.size()+1<<endl;
    }
}