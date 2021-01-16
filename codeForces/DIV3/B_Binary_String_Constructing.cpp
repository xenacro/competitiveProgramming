/*incomplete*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,x,i=0;
    cin>>a>>b>>x;
    int n=a+b;
    char s[n];
    for(; i<x; i+=2.){
        s[i]='0';
        s[i+1]='1';
    }
    a-=(i/2);
    b-=(i/2);
    if(x%2){
        while (b--)
        {
            s[i++] = '1';
        }
        while(a--){
            s[i++]='0';
        }
    }
    while(a>0){
        s[i++]='0';
        a--;
    }
    while(b>0){
        s[i++]='1';
        b--;
    }
    for(int j=0; j<n; j++)
        cout<<s[j];
}