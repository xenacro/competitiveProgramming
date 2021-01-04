/*1472*/
/*incomplete*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n,j;
        cin>>n;
        
        int a[n],p=0;
        
        for(int i=0; i<n; i++){
            cout << t;
            cin>>a[i];
        }
        
        long long int s=0, st=0;
        for(int i=0; i<n; i++){
            st=0;
            j=i;
            if(p>=n-1)
                j=n;
            else 
                p=0;
            for(; j<n; ){
                st+=a[j];
                j=j+a[j];
                if(a[j]==1)
                    p++;
            }
            if(st>s)
                s=st;
            
        }
        cout<<s<<endl;
    }
}