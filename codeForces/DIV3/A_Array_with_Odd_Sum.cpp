#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,o=0,e=0;
        cin>>n;
        int a[n];
        if(n%2==0){
            for(int i=0; i<n; i++){
                cin>>a[i];
                if(a[i]%2)
                    o++;
                else 
                    e++;
            }
            //cout<<e<<o;
            if(e&&o)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
        else {
            for(int i=0; i<n; i++){
                cin>>a[i];
                if(a[i]%2)
                    o++;
            }
            if(o)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
    }
}
