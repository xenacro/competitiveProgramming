#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    while(k--){
        long long int n,x,t,d=0;
        cin >> n >> x >> t;
        // int a[n];
        // for (long long int i=0; i<n-1; i++){
        //     if(i+((t+(i*x))/x)<n)
        //         d = d + ((t+(i*x))/x);
        //     else 
        //         d = d + n - i -1;
        //     // cout << ((t + (i * x)) / x) << " -> " << n-i-1 << endl;
        // }
        // d = ((n-1)*(t/x)) + (((n-1)*n)/2);
        if(x>t)
            d=0;
        else {
            // for(long long int i =n-1;i>0; i--){
            //     d = ((i*x)-t)/x > 0 ? d + (((i*x)-t)/x) : d;
            // }
        }
        cout << d << endl;
    }
}