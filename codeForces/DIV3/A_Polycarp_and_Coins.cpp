#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int o=n/3,e=n/3;
        if(n%3==2)
            e+=1;
        else if(n%3==1)
            o++;
        cout<<o<<" "<<e<<endl;
    }
}