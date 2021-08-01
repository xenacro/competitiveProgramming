#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b;
        cin>>a>>b;
        float r = (6-(a+b))/6;
        if(r<=0)
            cout<<0<<endl;
        else if (r==0.5)
            cout<<0.5<<endl;
        else if(r>0.8) 
            cout<<0.833333<<endl;
        else if(r>0.6)
            cout<<0.666666<<endl;
        else if(r>0.3)
            cout<<0.333333<<endl;
        else if(r>0.1)
            cout<<0.166666<<endl;
    }
}