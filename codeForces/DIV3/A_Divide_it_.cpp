#include <bits/stdc++.h>

using namespace std;

int myLogic(int p,long long int x){
    if(x==2)
        return p+1;
    if(x%2==0)
        return myLogic(p+1, x/2);
    if(x%3==0)
        return myLogic(p+1, 2*(x/3));
    if(x%5==0)
        return myLogic(p+1, 4*(x/5));
    if(x==1)
        return p;
    return -1;
}

int main(){
    int q;
    cin>>q;
    while(q--){
        long long int x;
        cin>>x;
        cout<<myLogic(0, x)<<endl;
    }
}