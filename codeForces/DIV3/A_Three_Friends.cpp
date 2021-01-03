#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        long long int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]!=a[1] && a[2]!=a[1]){
            a[0]++;
            a[2]--;
        }
        else if(a[0]==a[1] && a[0]!=a[2]){
            a[0]++;
            a[1]++;
            if(a[0]!=a[2])
                a[2]--;
        }
        else if(a[2]==a[1] && a[0]!=a[2]){
            a[2]--;
            a[1]--;
            if(a[0]!=a[2])
                a[0]++;
        }
        
        cout<<(a[2]-a[1])+(a[2]-a[0])+(a[1]-a[0])<<endl;
    }
}