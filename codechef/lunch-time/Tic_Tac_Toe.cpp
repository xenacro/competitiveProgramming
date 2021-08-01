#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,temp1,temp2;
        cin>>n>>m>>k;
        int a[n][m];
        for(int i=0; i<n*m; i++){
            cin>>temp1>>temp2;
            a[temp1-1][temp2-1] = i%2 ? 2 : 1;
        }
    }
}