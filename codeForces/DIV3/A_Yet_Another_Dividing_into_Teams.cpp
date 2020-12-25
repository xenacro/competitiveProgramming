#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,u=1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        for(int i=0; i<n-1; i++)
            if(a[i]+1==a[i+1])
                u++;
        if(u>1)
            cout<<2<<endl;
        else 
            cout<<1<<endl;
    }
}




























