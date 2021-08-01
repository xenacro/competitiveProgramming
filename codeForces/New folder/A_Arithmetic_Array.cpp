#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,temp;
        cin >> n;
        long long int s=0;
        for(int i=0; i<n; i++){
            cin >> temp;
            s+=temp;
        }
        if(s<n)
            cout << 1<<endl;
        else 
            cout <<s-n << endl;
    }
}