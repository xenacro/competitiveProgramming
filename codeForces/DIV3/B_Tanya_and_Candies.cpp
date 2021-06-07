#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++){
        int evS=0,odS=0;
        for(int j=0; j<n; j++){
            if(j<i)
                if(j%2)
                    odS+=a[j];
                else 
                    evS+=a[j];
            else if(j>i){
                if(j%2==0)
                    odS+=a[j];
                else 
                    evS+=a[j];
            }
        }
        if(evS==odS)
            r++;
        for(int j=i+1; j<n && evS==odS; j++){
            if(a[j]==a[i]){
                r++;
                i++;
            }
            else 
                break;
        }
    }
    cout<<r;
}