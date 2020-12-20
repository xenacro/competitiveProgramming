#include <bits/stdc++.h>

using namespace std;

int myLogic(int p, int n){
    if(n<10)
        return p+8;
    else if(n%10==0)
        return myLogic(p, n/10);
    else
        return myLogic(p+1, n+1);
}

int main(){
    int n;
    cin>>n;
    if(n<10)
        cout<<9;
    else
        cout<<myLogic(2,n+1);
}