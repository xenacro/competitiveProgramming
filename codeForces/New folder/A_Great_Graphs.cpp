#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int temp;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>temp;
        if(n%2)
            cout<<-1*temp<<endl;
        else 
            cout<<0<<endl;
    }
}