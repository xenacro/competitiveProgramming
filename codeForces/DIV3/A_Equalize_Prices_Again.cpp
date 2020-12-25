#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,t=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            t+=a[i];
        }
        if(t%n==0)
            cout<<t/n<<endl;
        else 
            cout<<(t/n)+1<<endl;
    }
}