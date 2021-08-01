#include <bits/stdc++.h>

using namespace std;

void myLogic(int n, int a, int b){
    while(a!=0&&n%a==0&&n>1)
        n/=a;
    // cout<<n;
    
    int bt = n%a,br=b%a;
    if(br==0){
        cout<<"No"<<endl;
        return;
    }
    if(bt%br){
        if(n%b==1){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
        return;
    }
        if(n%b==1){
            cout<<"Yes"<<endl;
            return;
        }
        else {
            n=n-((bt/br)*b);
        }
        
    // cout << n;
    // return ;
    if(n==1){
        cout<<"Yes"<<endl;
        return;
    }
    else if(n<1){
        cout<<"No"<<endl;
        return;
    }
    else if(n>1) return myLogic(n,a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a==1){
            if(n%b==1){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
        else if(n%b==1)
            cout << "Yes" << endl;
        else
            myLogic(n,a,b);
    }
}