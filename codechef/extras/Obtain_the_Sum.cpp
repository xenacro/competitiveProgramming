#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,s;
        cin>>n>>s;
        long long int sum = (n*(n+1))/2;
        if(sum-s>0&&sum-s<=n)
            cout<<sum-s<<endl;
        else 
            cout<<"-1\n";
    }
}