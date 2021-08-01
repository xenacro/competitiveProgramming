#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],max=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>max)
                max=a[i];
        }
        int s=0;
        for(int i=0; i<n; i++){
            // cin>>a[i];
            if(a[i]!=max)
                s=s|(a[i]^max);
        }
        cout<<max<<" "<<s<<endl;
    }
}