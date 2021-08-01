#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n];
    int b[10];
    cin >> a;
    // cout<<a[1];
    // vector<int> r;
    for(int i=1; i<10; i++)
        cin >> b[i];
    // cout<<b[8];
    for(int i=0; i<n; i++){
        int x=(int)a[i]-'0';
        if(x>b[(x)]){
            cout<<x;
        }
        else 
            cout<<b[(x)];
        // a=a/10;
    }
    // for(int i=n-1; i>=0; i--)
    //     cout<<r[i];
}