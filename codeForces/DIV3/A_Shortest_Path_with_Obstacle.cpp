#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        int step=0;
        if(abs(bx-ax)%4==0)
            step=step+abs(bx-ax);
        else 
            step=step+abs(bx-ax);
        if(abs(by-ay)%4==0)
            step=step+abs(by-ay);
        else 
            step=step+abs(by-ay);
        if(ax==bx&&bx==fx&&fy>min(ay,by)&&fy<max(ay,by))
            cout<<step+2<<endl;
        else if(ay==by&&by==fy&&fx>min(ax,bx)&&fx<max(ax,bx))
            cout<<step+2<<endl;
        else 
            cout<<step<<endl;
    }
}