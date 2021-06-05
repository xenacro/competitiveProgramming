#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string a,b;
        int x;
        cin>>a>>b;
        if(a.length()>b.length()){
            for(int i=0; i<b.length(); i++){
                for(int j=i+1; j<b.length(); j++){
                    if(a.find(b.substr(i,j)))
                        cout<<b.substr(i,j)<<endl;
                }
            }
        } 
        else {
            for(int i=0; i<a.length(); i++){
                for(int j=i+1; j<a.length(); j++){
                    if(b.find(a.substr(i,j)))
                        cout<<a.substr(i,j)<<endl;
                }
            }
        }
    }
}