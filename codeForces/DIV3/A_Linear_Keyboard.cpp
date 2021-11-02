#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        size_t found = s1.find(s2[0]);
        int r=0,p=found;
        for(int i=1; i<s2.length(); i++){
            found = s1.find(s2[i]);
            int temp=found;
            r+=abs(p-temp);
            p=temp;
        }
        cout<<r<<endl;
    }
}