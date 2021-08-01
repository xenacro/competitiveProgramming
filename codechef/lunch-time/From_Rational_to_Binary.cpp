#include <bits/stdc++.h>
using namespace std;
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


int main(){
    FAST1;
    FAST2;
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        while(b%2==0)
            b/=2;
        if(b==1)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
}