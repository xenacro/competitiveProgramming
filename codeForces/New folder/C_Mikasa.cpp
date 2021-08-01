#include <bits/stdc++.h>

using namespace std;

int nextPowerOf2(int n){
    int count = 0;
    if (n && !(n & (n - 1)))
        return n;
    while (n != 0){
        n >>= 1;
        count += 1;
    }
    return 1 << count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b<a)
            cout<<"0\n";
        else {
            int aNext=nextPowerOf2(a),bNext=nextPowerOf2(b);
            aNext==a ? aNext=(a*2)-1 : aNext-=1;
            bNext==b ? bNext=(b*2)-1 : bNext-=1;
            if(b<aNext)
                cout<<(a^aNext)<<endl;
            else
                cout<<(a^bNext)<<endl;
        }
    }
}