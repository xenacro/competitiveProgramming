#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m,x;
        cin>>n>>m>>x;
        long long int i,j,y;
        i = x%n ? x/n : (x/n)-1;
        j = x%n ? (x%n)-1 : n-1;
        y = (m*j)+i+1;
        cout<<y<<endl;
    }
}