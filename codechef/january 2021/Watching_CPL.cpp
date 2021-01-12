/*incomplete*/
#include<bits/stdc++.h>

using namespace std;

int myLogic(int as, int d, int c, int k, int a[],int i,int n){
    if(as>k)
        return c;
    if(d<=a[i]){
        int t=a[i];
        a[i]=0;
        return myLogic(as+t,d-t,c+1,k,a,i-1,n);
    }
    else if(i!=0)
        return  myLogic(as, d, c, k, a, i-1,n);
    else 
        return  n+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],cs=0,q=n;
        for(int i=0; i<n; i++){
            cin>>a[i];
            cs+=a[i];
        }
        if(cs<(2*k)){
            cout<<-1<<endl;
        }
        else{
        sort(a, a + n);
            cs=myLogic(0,k,0,k,a,n-1,n);
            cs=myLogic(0,k,cs,k,a,n-2,n);
            if(cs<n)
                cout<<cs<<endl;
            else 
                cout<<-1<<endl;

        // int i=0;
        // while(cs>(2*k)){
        //     cs-=a[i];
        //     q--;
        //     i++;
        // }
          
        
        // int as=0,bs=0,c=2;
        // while(as<k&&bs<k&&i>=0){
        //     if(as>bs&&bs<k){
        //         bs+=a[i];
        //     }else if(as<k)
        //         as+=a[i];
        //     i--;
        //     c++;
        // }
        // for(int i=n-1; i>=0&&as<k; i-=2){
        //     as+=a[i];
        //     c++;
        // }
        // for(int i=n-2; i>=0&&bs<k; i-=2){
        //     bs+=a[i];
        //     c++;
        // }
        // for(int i=n-1; i>=0; i--){
        //     if(as<k){
        //         as+=a[i];
        //         c++;
        //     } else if(bs<k){
        //         bs+=a[i];
        //         c++;
        //     } else
        //         break;
        // }
        // if(as>=k&&bs>=k)
        //     if(c<q+1)
        //         cout<<c<<endl;
        //     else
        //         cout<<q+1<<endl;
        }
        // else 
        //     cout<<-1<<endl;
    }
}