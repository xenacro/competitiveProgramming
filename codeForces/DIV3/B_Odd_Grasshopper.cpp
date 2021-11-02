#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>x>>n;
        ll n1=(n-1)%4 == 0 ? (n-1)/4 : ((n-1)/4)+1,n2=(n-1)%4 < 2 ? (n-1)/4 : ((n-1)/4)+1, n3=(n-1)%4 < 3 ? (n-1)/4 : ((n-1)/4)+1, n4=(n-1)%4 == 3 ? ((n-1)/4)+1 : (n-1)/4;
        if(n<2){
            n1=0;
            n2=0;
            n3=0;
            n4-0;
        }
        ll s1=((n1)*(4+((n1-1)*4)))/2, s2=((n2)*(6+((n2-1)*4)))/2, s3=((n3)*(8+((n3-1)*4)))/2, s4=((n4)*(10+((n4-1)*4)))/2;
        ll r=x;
        // cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
        if(x%2&n>0){
            r+=1;
            r+=(s3+s4)-(s1+s2);
        }
        else if(n>0) {
            r-=1;
            r+=(s1+s2)-(s3+s4);
        }
        cout<<r<<endl;
    }
}