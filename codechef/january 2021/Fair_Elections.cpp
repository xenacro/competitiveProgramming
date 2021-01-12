#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        long long int as=0,bs=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            as+=a[i];
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
            bs+=b[i];
        }
        if(as>bs)
            cout<<0<<endl;
        else {
            sort(a,a+n);
            sort(b,b+m);
            if(a[0]>=b[m-1])
                cout<<-1<<endl;
            else {
                int i=0;
                while(as<=bs&&i<n){
                    as=as+b[m-1-i]-a[i];
                    bs=bs+a[i]-b[m-1-i];
                    i++;
                }
                if(as>bs)
                    cout<<i<<endl;
                else 
                    cout<<-1<<endl;
            }
        }
    }
}