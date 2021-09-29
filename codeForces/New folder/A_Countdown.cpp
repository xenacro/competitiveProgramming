#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        string timeVal;
        cin>>n>>timeVal;
        for(int i=0; i<n; i++){
            if(timeVal[i]!='0'){
                c+=(timeVal[i]-'0');
                if(i!=n-1) c++;
            }
        }
        cout<<c<<endl;
    }
}