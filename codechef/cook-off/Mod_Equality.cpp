#include <bits/stdc++.h>

#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
    fast_IO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],min=0,minF=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i==0)
                min=a[i];
            else if(a[i]<min)
                min=a[i];
        }
        for(int i=0; i<n; i++)
            if(a[i]==min)
                minF++;
        if(min==1&&minF==1)
            cout << n << endl;
        else
            cout << n - minF << endl;
    }
}