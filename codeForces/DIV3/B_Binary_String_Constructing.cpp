#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,x,i=0;
    cin>>a>>b>>x;
    if(x%2){
        if(a>b){
            for(i=0; i<x/2; i++)
                cout<<"01";
            for(i=0;i<a-(x/2);i++)
               cout<<'0';
            for(i=0;i<b-(x/2);i++)
                cout<<'1';
        }
        else {
            for(i=0; i<x/2; i++)
                cout<<"10";
            for(i=0;i<b-(x/2);i++)
                cout<<'1';
            for(i=0;i<a-(x/2);i++)
                cout<<'0';
        }
    }
    else {
        if(a>b){
            for(i=0; i<x/2; i++)
                cout << "01";
            for(i=0;i<b-(x/2);i++)
                cout << "1";
            for(i=0;i<a-(x/2);i++)
                cout << "0";
        }
        else {
            for(i=0; i<x/2; i++)
                cout << "10";
            for(i=0;i<a-(x/2);i++)
                cout << "0";
            for(i=0;i<b-(x/2);i++)
                cout << "1";
        }
    }
}