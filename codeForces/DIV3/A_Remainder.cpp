#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y,r=0;
    cin>>n >>x >>y;
    char a[n];
    cin>>a;
    for(int i=n-1; i>n-1-y; i--){
        if(a[i]!='0')
            r++;
    }
    for(int i=n-2-y; i>n-1-x; i--)
        if(a[i]!='0')
            r++;
    if(a[n-1-y]!='1')
        r++;
    cout<<r;
}