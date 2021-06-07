#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r=0;
    cin >> n;
    int a[2*n];
    for (int i=0; i<n; i++){
        cin >> a[i];
        a[n+i]=a[i];
    }
    int k=0;
    for (int i=0; i<2*n; i++){
        if(a[i]==1)
            k++;
        else 
            k=0;
        if(k>r)
            r=k;
    }
    cout << r;
}