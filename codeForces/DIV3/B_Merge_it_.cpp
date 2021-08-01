#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int temp, k = 0,c0=0,c1=0,c2=0;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if(temp%3==0)
                c0++;
            else if(temp%3==1)
                c1++;
            else
                c2++;
        }
        k=c0;
        if(c1==c2)
            k+=c1;
        else if(c1>c2)
            k+=c2+((c1-c2)/3);
        else 
            k+=c1+((c2-c1)/3);
        cout<<k<<endl;
    }
}