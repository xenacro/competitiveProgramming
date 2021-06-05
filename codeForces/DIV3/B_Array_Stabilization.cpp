#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    int r=a[n-2]-a[0];
    if(r>a[n-1]-a[1])
        r=a[n-1]-a[1];
    /* r=a[n-1]-a[0];
    if(r<a[n-2]-a[0])
        */
    cout << r<<endl;
}