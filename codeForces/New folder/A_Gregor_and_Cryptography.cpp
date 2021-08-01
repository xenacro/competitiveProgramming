#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int r = n-(n%2);
        cout<<"2 "<<r<<endl;
    }
}