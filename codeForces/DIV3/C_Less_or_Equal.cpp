#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, r=-1;
    cin>>n >>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a + n);
    if (k >= n){
        r = a[k-1];
    } else {
        
        if(k==0 && a[0]>1)
            r=a[0]-1;
        else if ((a[k] > a[k - 1]))
            r = a[k] - 1;
    }
    cout<<r;
}