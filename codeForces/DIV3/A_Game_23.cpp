#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c=0;
    cin>>n>>m;
    if(m%n){
        cout<<-1;
        return 0;
    }else 
        m/=n;
    while(m%2==0){
        m/=2;
        c++;
    }
    while(m%3==0){
        m/=3;
        c++;
    }
    if(m!=1){
        cout<<-1;
        return 0;
    }
    cout<<c;
}