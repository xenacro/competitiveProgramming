#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int c,d;
        cin>>c>>d;
        if(abs(c-d)%2)
            cout<<-1;
        else if(c==0&&d==0)
            cout<<0;
        else if(c==d)
            cout<<1;
        else 
            cout<<2;
        cout<<endl;
    }
}