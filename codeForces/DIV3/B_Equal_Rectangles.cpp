#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[4*n];
        for(int i=0; i<4*n; i++)
            cin>>a[i];
        sort(a, a+(4*n));
        int area=a[0]*a[(4*n)-1];
        bool yes = true;
        for(int i=0; i<4*n; i+=2){
            if(a[i]!=a[i+1])
                yes = false;
        }
        if(yes){
            for(int i=2; i<2*n; i+=2){
            if(a[i]*a[(4*n)-i-1]!=area)
                yes = false;
        }
        }
        
        if(yes)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}