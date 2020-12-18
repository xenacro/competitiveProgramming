#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n >>k;
        int a='a';
        for(int i=0; i<n/k; i++){
            for(int j=0; j<k; j++){
                cout << (char)(a + j);
            }
        }
        for(int i=0; i<n%k; i++)
            cout<<(char)(a+k-1);
        cout<<endl;
    }
}