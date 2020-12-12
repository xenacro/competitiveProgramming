#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int countFreq(string &pat, string &txt, int N) {
    int M = 2;
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
    int n,f=0;
    string s,t,r;
    cin>>n;
    cin>>s;
    for(int i=0; i<n-1; i++){
        //cout<<s[i];
        t=s.substr(i,2);
        
        if(f<countFreq(t, s, n)){
            r=t;
            f = countFreq(t, s, n);
        }
    }
    cout<<r;
}