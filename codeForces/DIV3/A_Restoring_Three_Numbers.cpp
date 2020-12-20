#include <bits/stdc++.h>

using namespace std;

int main(){
    int x[4];
    for(int i=0; i<4; i++)
        cin>>x[i];
    int g=0;
    for(int i=1; i<4; i++)
        if(x[g]<x[i])
            g=i;
    for(int i=0; i<4; i++)
        if(i!=g)
            cout<<x[g]-x[i]<<" ";
}