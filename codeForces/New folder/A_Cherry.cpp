#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int p=1,r=0;
        for (long long int i = 0; i < n-1; i++){
            p=a[i]*a[i+1];
            r=max(p,r);
        }
        cout<<r<<endl;
    }
}

/**
 * 
 * if(a[maxi+1]==a[maxi]||a[maxi-1]==a[maxi])
            cout<<a[maxi]*a[maxi]<<endl;
        else{
            long long int smax = maxi==0 ? 1 : 0;
            for(long long int i=0; i<n; i++){
                if(a[i]>a[smax]&&a[i]<a[maxi])
                    smax=i;
            }
            if(smax==maxi+1||smax==maxi-1)
                cout<<a[smax]*a[maxi]<<endl;
            else 
                cout<<max(a[maxi-1],a[maxi+1])*a[maxi]<<endl;
        }
        */