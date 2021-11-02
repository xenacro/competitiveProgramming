#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int s;
        cin>>s;
        long long int zp=-1,tp=-1,fp=-1,sp=-1,zp2=-1,i=0,fp2=-1;
        while(s>0){
            i++;
            long long int dig=s%10;
            if(dig==0&&zp!=-1)
                zp2=i;
            if(dig==0&&zp==-1)
                zp=i;
            else if(dig==2&&tp==-1&&fp!=-1)
                tp=i;
            else if(dig==5&&fp==-1)
                fp=i;
            else if(dig==5&&fp2==-1&&zp!=-1)
                fp2=i;
            else if(dig==7&&sp==-1&&fp!=-1)
                sp=i;
            if((zp!=-1&&zp2!=-1)||(zp!=-1&&fp2!=-1)||(tp!=-1&&fp!=-1)||(sp!=-1&&fp!=-1))
                break;
            s/=10;
        }
        if(zp!=-1&&zp2!=-1)
            cout<<(zp-1)+(zp2-zp-1)<<endl;
        else if(zp!=-1&&fp2!=-1)
            cout<<(zp-1)+(fp2-zp-1)<<endl;
        else if(tp!=-1&&fp!=-1)
            cout<<(fp-1)+(tp-fp-1)<<endl;
        else if(sp!=-1&&fp!=-1)
            cout<<(fp-1)+(sp-fp-1)<<endl;
        else 
            cout<<i<<endl;
    }
}