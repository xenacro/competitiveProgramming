#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        int req=n,res=0,k=0;
        while(res==0&&k<n){
            for(int i=0; i<n; i++){
                if(req>(a[k]+b[i])%n){
                    req=(a[k]+b[i])%n;
                    res=i;
                    // cout << res << " " << req << endl;
                }
            }
            k++;
        }
        for(int i=0,k=0; i<n; i++){
            if(res+i<n)
                cout<<(a[i]+b[res+i])%n<<" ";
            else
                cout<<(a[i]+b[k++])%n<<" ";
        }
        cout<<endl;
    }
}