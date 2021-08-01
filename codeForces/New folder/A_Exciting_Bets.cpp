#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a==b)
            cout<<"0 0"<<endl;
        else if(a==b+1||b==a+1)
            cout<<"1 0"<<endl;
        else if(a==0||b==0)
            cout<<max(a,b)<<" "<<0<<endl;
        else {
            long long int ext = abs(a-b);
            if(a%ext==0)
                cout<<ext<<" "<<0<<endl;
            else{
                cout<<ext<<" ";
                long long int p=abs(((a/ext)*ext)-a), n=abs((((a/ext)+1)*ext)-a);
                cout<<min(p,n)<<endl;
            }
        }
    }
}