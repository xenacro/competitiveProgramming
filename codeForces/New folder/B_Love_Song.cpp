#include <bits\stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[n];
    long long int r = 0;
    for(int i=0; i<n; i++){
        r = r + s[i] - 'a' + 1;
        a[i] = r;
    }
    while(k--){
        int l,r;
        cin >> l >> r;
        if(l==1)
            cout << a[r-1] << endl;
        else 
            cout << a[r-1] - a[l-2] << endl;
    }
}