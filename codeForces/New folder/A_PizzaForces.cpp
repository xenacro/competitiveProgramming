#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<7)
            cout<<"15\n";
        else {
            if (n % 2)
                n++;
            cout << (n * 5) / 2 << endl;
        }
        // cout<<t<<endl;
    }
}