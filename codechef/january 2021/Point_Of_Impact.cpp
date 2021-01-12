#include <bits/stdc++.h>

using namespace std;

void myLogic(int n,int x, int y, int d, int k){
    if((x==0&&y==n)||(x==0&&y==0)||(x==n&&y==n)||(x==n&&y==0)){
        cout<<x<<" "<<y<<endl;
        return;
    }
    if(k==0){
        cout<<x<<" "<<y<<endl;
        return;
    }
    if(d==0){
        if(x>=y){
            myLogic(n,n,y+(n-x),1,k-1);
            return;
        }
        else {
            myLogic(n,x+(n-y),n,3,k-1);
            return;
            }
    } 
    else if(d==1){
        if(x+y<n){
            myLogic(n,0,y+x,0,k-1);
            return;
            }
        else {
            myLogic(n,x-(n-y),n,2,k-1);
            return;
            }
    }
    else if(d==2){
        if(x>=y){
            myLogic(n,x-y,0,1,k-1);
            return;
            }
        else {
            myLogic(n,0,y-x,3,k-1);
            return;
            }
    }
    else if(d==3){
        if(x+y>=n){
            myLogic(n,n,y-(n-x),2,k-1);
            return;
            }
        else {
            myLogic(n,x+y,0,0,k-1);
            return;
            }
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y)
            cout<<n<<" "<<n<<endl;
        else if(k%4||k==0){
            myLogic(n,x,y,0,(k%4));
        }else 
            myLogic(n,x,y,0,4);
    }
}