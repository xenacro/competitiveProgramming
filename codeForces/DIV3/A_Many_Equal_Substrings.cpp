#include <bits/stdc++.h>
#include <string>
using namespace std;
int countFreq(string &pat, string &txt){
    int M = pat.length();
    int N = txt.length();
    int res = 0;
    for (int i = 0; i <= N - M; i++){
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M){
            res++;
            j = 0;
        }
    }
    return res;
}
int main(){
    int n, k,l=0;
    cin>>n >>k;
    string s,r;
    cin>>s;  
    for(int i=1; i<=n; i++){
        r=s+s.substr(n-i,n);
        if(countFreq(s,r)==2){
            l=i;
            break;
        }
    }
    cout<<s;
    for(int i=0; i<k-1; i++)
        cout<<s.substr(n-l,n);
}