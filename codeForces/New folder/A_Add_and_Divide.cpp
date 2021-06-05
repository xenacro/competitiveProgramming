/*incomplete*/
#include <bits/stdc++.h>

using namespace std;

int myLogic(int a, int b, int r){
    if(a<b)
        return r+1;
    else if(a==b)
        return r+2;
    else if(a%b)
        return myLogic(a/b, b, r+1);
    else
        return myLogic(a, b+1, r+1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<myLogic(a, b, 0)<<endl;
    }
}