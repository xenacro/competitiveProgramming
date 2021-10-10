#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][5],rn=n;
        for(int i=0; i<n; i++)
            for(int j=0; j<5; j++)
                cin>>a[i][j];
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<5; j++)
        //         cout<<a[i][j]<<" ";
        //     cout<<endl;
        // }
        int frq[5];
        for(int i=0; i<6; i++){
            frq[i]=0;
            for(int j=0; j<n; j++)
                frq[i]+=a[j][i];
        // cout<<i<<" "<<frq[i]<<" "<<rn<<endl;
        }
        int bg=-1, bg2=-1;
        for(int i=0; i<6; i++){
            if(bg!=-1&&frq[i]>=rn/2)
                bg2=i;
            if(frq[i]>=rn/2&&bg==-1)
                bg=i;
        }
        // cout<<bg<<" "<<bg2<<endl;
        // sort(frq, frq+5);
        // // cout<<frq[3]<<n;
        if(bg2==-1)
            cout<<"NO\n";
        else{
            for(int i=0; i<6; i++){
                if(frq[i]<rn/2)
                    continue;
                else {
                    
                }
            }
        }
    }
}