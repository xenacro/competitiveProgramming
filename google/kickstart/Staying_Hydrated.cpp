#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,i=0;
    cin>>t;
    while(i<t){
        cout<<"Case #"<<++i<<": ";
        int n;
        cin>>n;
        int a[n][4];
        for(int i=0; i<n; i++) cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
        if(n==1){
            if(a[0][0]<a[0][2]) cout<<a[0][0]<<" "<<a[0][1]<<endl;
            else cout<<a[0][2]<<" "<<a[0][3]<<endl;
        }
        else {
            
        }
    }
}