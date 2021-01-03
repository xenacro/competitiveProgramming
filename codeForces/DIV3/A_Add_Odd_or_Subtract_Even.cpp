#include <bits/stdc++.h>

using namespace std;

int myLogic(int a,int b,int r){
    if(a==b)
        return r;
    else if(a>b){
        if((a-b)%2)
            return myLogic(a-(a-b)-1, b, r+1);
        else 
            return myLogic(a-(a-b), b, r+1);
    }
    else {
        if((b-a)%2)
            return myLogic(a+(b-a), b, r+1);
        else 
            return myLogic(a+(b-a)-1, b, r+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<myLogic(a,b,0)<<endl;
    }
}