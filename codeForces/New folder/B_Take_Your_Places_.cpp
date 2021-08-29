#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],ec=0,oc=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2)
                oc++;
            else 
                ec++;
        }
        if(abs(ec-oc)>1)
            cout<<-1;
        else {
            
        }
    }
}