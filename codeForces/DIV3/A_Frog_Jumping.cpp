#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a, b, k;
        cin>>a >>b >>k;
        cout<<(a*(k-(k/2)))-(b*(k/2))<<endl;
    }
}