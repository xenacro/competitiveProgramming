#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(a>b){
            if((a-b)%2)
                cout<<((b-a)+1)/2<<endl;
            else 
                cout<<(b-a)/2<<endl;
        }
        else {
            if((b-a)%2)
                cout<<((b-a)+1)/2<<endl;
            else 
                cout<<((b-a)+2)/2<<endl;
        }
    }
}