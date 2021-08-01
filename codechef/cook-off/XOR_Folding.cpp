#include <bits/stdc++.h>

using namespace std;

// int binaryToDecimal(string n){
//     string num = n;
//     int dec_value = 0, base = 1, len = num.length();
//     for (int i = len - 1; i >= 0; i--){
//         if (num[i] == '1')
//             dec_value += base;
//         base = base * 2;
//     }
//     return dec_value;
// }

int findFreq(string s, int m){
    int x=0;
    for(int i=0; i<m; i++)
        if(s[i]=='1')
            x++;
    return x;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s[n];
        int r=0;
        for(int i=0; i<n; i++)
            cin>>s[i];
        for(int i=0; i<n; i++){
            // a[i]=0;
            if(findFreq(s[i],m)%2)
                r++;
        }
        if(r%2)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}

/*
for(int i=0; i<n; i++)
            a[i] = binaryToDecimal(s[i]);
        int r=a[0];
        for(int i=1; i<n; i++)
            r=r^a[i];
        int c = __builtin_popcount(r);
        if(c%2)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
            */