#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int L, v, a, b;
        cin>> L >> v >> a >> b;
        if(a%v==0)
            cout<<(L/v)-((b/v)-(a/v)+1)<<endl;
        else
            cout<<(L/v)-((b/v)-(a/v))<<endl;
    }
}