#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ac=0,bc=0,a[3],b[3];
        for(int i=0; i<3; i++)
            cin>>a[i];
        for(int i=0; i<3; i++)
            cin>>b[i];
        for(int i=0; i<3; i++)
            if(a[i]>b[i])
                ac++;
            else if(b[i]>a[i])
                bc++;
        if(ac>bc)
            cout<<'A'<<endl;
        else if(ac<bc)
            cout<<'B'<<endl;
    }
}