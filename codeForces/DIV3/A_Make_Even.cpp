#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        bool p=false;
        for(auto it:s)
            if((it-'0')%2==0) p=true;
        if (!p) {
            cout << -1 << endl;
        }
        else if ((s[n - 1] - '0') % 2 == 0) {
            cout << 0 << endl;
        }
        else if ((s[0] - '0') % 2 == 0) {
            cout << 1 << endl;
        }
        else if (p) {
            cout << 2 << endl;
        }
    }
}