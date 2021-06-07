#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r=1;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    if(a[n-2]==a[n-1])
        r=a[n-1];
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    // cout<<endl;
    for (int i=n-2; i>=0&&r==1; i--){
        if(a[n-1]%a[i]==0&&a[i-1]!=a[i])
            a[i]=0;
    }
    // for(int i=0; i<n; i++)
    //     cout << a[i]<<" ";
    // cout<<endl;
    for (int i=n-2; i>=0&&r==1; i--){
        if(a[i]!=0){
            r=a[i];
            break;
        }
    }
    cout << a[n-1]<<" "<<r<<endl;
}

// bool b=true;
// for (int j=2; j<=i; j++){
//     if(a[i]%a[j]!=0)
//         b=false;
// }
// if(b){
//     r=a[i];
//     break;
// }
