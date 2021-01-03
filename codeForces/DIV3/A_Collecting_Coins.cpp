#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3],n;
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
        if((n-((a[2]-a[1])+(a[2]-a[0])))%3==0 && n>=((a[2]-a[1])+(a[2]-a[0])))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}