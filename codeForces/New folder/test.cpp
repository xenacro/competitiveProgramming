#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 19260817, a= 233,b= 264,i=0;
    cout<<"bt="<<n%a<<"\tbr="<<b%a<<"\tbt%br="<<(n%a)%(b%a)<<endl;
    while(n%a && n>b){
        n-=b;
        cout<<i++<<endl;
    }
}