#include <bits/stdc++.h>

using namespace std;

void potaLogic(int a, int b){
    if (a & 1){
        a++;
        if (__gcd(a, b) > 1){
            cout << "1" << endl;
            return;
        }
        a--;
        b++;
        if (__gcd(a, b) > 1){
            cout << "1" << endl;
            return;
        }
        cout << "2" << endl;
    }
    else
        cout << "1" << endl;
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        // cout<<a<<" "<<b<<endl;
        if(__gcd(a,b)>1)
            cout << 0 << endl;
        else{
            potaLogic(a,b);
        }
        // else if(a!=1&&b==1)
        //     cout<<(a%2)+1<<endl;
        // else if(a==1&&b!=1)
        //     cout<<(b%2)+1<<endl;
        // else 
        //     cout<<2<<endl;
    }
}
