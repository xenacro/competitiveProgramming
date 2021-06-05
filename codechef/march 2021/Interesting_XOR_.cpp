#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int y=pow(2, ceil(log(x)/log(2))),res=0;
        for(int i=1; i<(y/2); i++)
            for(int j=(y/2); j<y; j++){
                int lpg=i^j;
                if(lpg==x && res<i*j){
                    res=i*j;
                    // cout<<i<<" "<<j<<" "<<res<<endl;
                }
            }
        cout<<res<<endl;
    }
}