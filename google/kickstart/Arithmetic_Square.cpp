#include <bits/stdc++.h>

using namespace std;

int myLogic(int a1,int a2,int a3,int b1,int b2,int b3,int c1,int c2,int c3){
    int res=0;
    if(b1+b3==2*b2)
        res++;
    if(a2+c2==2*b2)
        res++;
    if(a1+c3==2*b2)
        res++;
    if(a3+c1==2*b2)
        res++;
    return res;
}

int main(){
    int t;
    cin>>t;
    int itr=1;
    while(itr<=t){
        int a1,a2,a3,b1,b2,b3,c1,c2,c3,r=0,r1=0,r2=0,r3=0,r4=0;
        cin>>a1>>a2>>a3>>b1>>b3>>c1>>c2>>c3;
        cout<<"Case #"<<itr<<": ";
        if(a1+a3==2*a2)
            r++;
        if(c1+c3==2*c2)
            r++;
        if(a1+c1==2*b1)
            r++;
        if(a3+c3==2*b3)
            r++;
        r1=(a1+c3)/2;
        r2=(a3+c1)/2;
        r3=(a2+c2)/2;
        r4=(b1+b3)/2;
        int l1=myLogic(a1,a2,a3,b1,r1,b3,c1,c2,c3),l2=myLogic(a1,a2,a3,b1,r2,b3,c1,c2,c3),l3=myLogic(a1,a2,a3,b1,r3,b3,c1,c2,c3),l4=myLogic(a1,a2,a3,b1,r4,b3,c1,c2,c3);
        // cout<<endl<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<endl;
        r=r+max(max(l1,l2),max(l3,l4));
        cout<<r<<endl;
        itr++;
    }
}

/*if(abs(a2-b3)%2==0){
            b2=(a2+b3)/2;
            if(b1-b2==b2-b3)
                r1++;
            if(a2-b2==b2-b3)
                r1++;
            if(a1-b2==b2-c3)
                r1++;
            if(a3-b2==b2-c1)
                r1++;
        }
        max(max(l1,l2),max(l3,l4))
        
        (a1+c3)%2==0 ? 
(a3+c1)%2==0 ? 
(a2+c2)%2==0 ? 
(b1+b3)%2==0 ? 
         : -1
 : -1
 : -1
 : -1
        if(r1==-1&&r2==r1&&r3==r1&&r4==r1)
            cout<<r<<endl;
        else if((r1==-1&&r2==-1&&r3==-1&&r4!=-1)||(r1==-1&&r2==-1&&r4==-1&&r3!=-1)||(r1==-1&&r4==-1&&r3==-1&&r2!=-1)||(r4==-1&&r2==-1&&r3==-1&&r1!=-1))
            cout<<r+1<<endl;
        else if(r1!=r2&&r1!=r2&&r1!=r3&&r2!=r3&&r2!=r4&&r3!=r4&&r1!=-1)
        else if((r1!=-1&&r1==r2&&r1!=r3&&r1!=r4)||(r1!=-1&&r1==r3&&r1!=r2&&r1!=r4)||(r1!=-1&&r1==r4&&r1!=r3&&r1!=r2)||(r2!=-1&&r3==r2&&r1!=r2&&r2!=r4)||(r2!=-1&&r4==r2&&r2!=r3&&r2!=r1)||(r3!=-1&&r3==r4&&r1!=r3&&r2!=r4))
            cout<<r+2<<endl;
        */