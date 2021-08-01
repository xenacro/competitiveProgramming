#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<3)
            cout<<"2 1";
        else if(n<4)
            cout<<"3 1 2";
        else if(n%2){
            cout<<"3 1 2 ";
            for(int i=2; i<=(n-1)/2; i++)
                cout<<(2*i)+1<<" "<<2*i<<" ";
        }
        else {
            // cout<<"3 1 2 ";
            for(int i=1; i<=n/2; i++)
                cout<<2*i<<" "<<(2*i)-1<<" ";
        }
        cout<<endl;

    }
}