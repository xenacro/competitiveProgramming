/* incomplete */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],s[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0,q=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]==a[i]/3 || a[j]==a[i]*2){
                s[q++]=a[i]; s[q++]=a[j];
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout<< s[i] <<" ";
}