#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    for(int i=1; i<=n && n>=i*(i+1)/2; i++)
        cout<<a[(i*(i+1)/2)-1];
}