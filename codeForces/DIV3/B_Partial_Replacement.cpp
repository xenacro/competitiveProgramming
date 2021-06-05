#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        string s;
        cin>>n>>k>>s;
        int a[n],j=0;
        for(int i=0; i<n; i++)
            if(s[i]=='*')
                a[j++]=i;
        for(int i=0; i<j; i++)  
            cout<<a[i]<<" ";
        cout<<endl;
        if(j<3)
            cout<<j<<endl;
    }
}