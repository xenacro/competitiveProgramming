#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],k=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i]>k){
            k++;
            a[i]=0;
        }
        
    }
    cout<<k;
}