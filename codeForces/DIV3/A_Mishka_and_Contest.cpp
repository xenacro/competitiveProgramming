#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k,r=0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]<=k){
            a[i]=0;
            r++;
        }
        else
            break;
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]<=k && a[i]!=0){
            a[i]=0;
            r++;
        }
        else
            break;
    }
    cout<<r;
    
}