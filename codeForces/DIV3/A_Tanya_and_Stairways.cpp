#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r=1;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
        if(a[i+1]==1)
            r++;
    cout<<r<<endl;
    for (int i = 0; i < n; i++)
        if (a[i+1] == 1 || i==n-1)
            cout<<a[i]<<" ";
}