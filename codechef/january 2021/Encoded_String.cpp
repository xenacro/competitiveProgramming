#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        cin>>a;
        int b[n/4];
        char s[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
        for(int i=0; i<n/4; i++){
            b[i]=0;
            for(int j=0,k=8; j<4; j++){
                b[i]=b[i]+((a[(i*4)+j]-'0')*k);
                k/=2;
            }
            //cout << b[i];
        }
        for(int i=0; i<(n/4); i++)
            cout<<s[b[i]];
        cout<<endl;
    }
}