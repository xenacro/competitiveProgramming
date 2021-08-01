#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        int d=0;
        for(int i=1; i<n-1; i++){
            if(a[d+1]-a[d]>a[i+1]-a[i])
                d=i;
        }
        // cout << d<<endl;
        if(n<3){
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
        }
        else {
            for (int i = d + 1; i < n; i++)
                cout << a[i] << " ";
            for (int i = 0; i <= d; i++)
                cout << a[i] << " ";
        }
        cout<<endl;
    }
}