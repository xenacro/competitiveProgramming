#include <bits/stdc++.h>

using namespace std;

int findFreq(string s, int m){
    int x=0;
    for(int i=0; i<m; i++)
        if(s[i]=='1')
            x++;
    return x;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f = findFreq(s,n);
        if(f==0)
            cout<<1<<endl;
        else if (f == 1)
            cout << 0 << endl;
        else{
            
        }
    }
}