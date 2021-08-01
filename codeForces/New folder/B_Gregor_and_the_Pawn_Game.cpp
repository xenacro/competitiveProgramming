#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,r;
        cin>>n>>s>>r;
        int pr=0;
        for(int i=0; i<n; i++){
            if(r[i]=='1'){
                if(s[i]=='0')
                    pr++;
                else {
                    if(i>0&&s[i-1]=='1'){
                        pr++;
                        s[i-1]='0';
                    }
                    else if(i<n-1&&s[i+1]=='1'){
                        pr++;
                        s[i+1]='a';
                    }
                }
            }
        }
        cout<<pr<<endl;
    }
}