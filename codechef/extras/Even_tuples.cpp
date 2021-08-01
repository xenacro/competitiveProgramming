#include <bits/stdc++.h>

using namespace std;

long long int fact(long long int n){
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

long long int nCr(long long int n, long long int r){
    return fact(n) / (fact(r) * fact(n - r));
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,q,e=0,o=0;
        cin>>n>>q;
        long long int a[n],eve[n],od[n];
        for(long long int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2)
                o++;
            else 
                e++;
            eve[i]=e;
            od[i]=o;
        }
        while(q--){
            long long int l,r;
            cin>>l>>r;
            long long int even, odd;
            if(l==1){
                even = eve[r - 1];
                odd = od[r - 1];
            }
                
            else{
                even = eve[r - 1] - eve[l - 2];
                odd = od[r - 1] - od[l - 2];
            }
                
            // for(long long int i=l-1; i<r; i++)
            //     if(a[i]%2)
            //         odd++;
            //     else 
            //         even++;
            long long int ans=0;
            if(even>=3)
                ans = nCr(even, 3);
            if(odd>=2&&even>=1)
                ans+=(nCr(odd, 2) * nCr(even, 1));
            // cout<<min(nCr(odd,2),nCr(even,1))<<endl;
            cout<<ans<<endl;
        }
    }
}

/*
if(r-l<2)
                cout<<0<<endl;
            else {
                long long int c=0;
                for(long long int i=l-1; i<r-2; i++){
                    for(long long int k=i+2; k<r; k++ ){
                        for(long long int j=i+1; j<k; j++){
                            if((a[i]+a[j]+a[k])%2==0)
                                c++;
                        }
                    }
                }
                cout<<c<<endl;
            }


*/