#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    long long int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    while(t--){
        int f;
        cin>>f;
        if(f==1){
            int l,r;
            long long int x;
            cin>>l>>r>>x;
            for(int i=l-1; i<r; i++)
                a[i]+=((x+i+1-l)*(x+i+1-l));
        }
        else {
            int y;
            cin>>y;
            cout<<a[y-1]<<endl;
        }
    }
}