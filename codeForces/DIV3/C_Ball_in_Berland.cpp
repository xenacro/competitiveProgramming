/*1475*/
/*incomplete*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, k, r=0;
        cin>>a>>b>>k;
        int p[k][2];
        for(int i=0; i<k; i++)
            cin>>p[i][0];
        for(int i=0; i<k; i++)
            cin>>p[i][1];
        for(int i=0; i<k-1; i++){
            for(int j=i+1; j<k; j++){
                if(p[j][0]!=p[i][0]&&p[j][1]!=p[i][1])
                    r++;
            }
        }
        cout<<r<<endl;
    }
}