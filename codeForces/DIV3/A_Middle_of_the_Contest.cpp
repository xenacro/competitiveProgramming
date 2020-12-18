#include <bits/stdc++.h>

using namespace std;

int main(){
    int h1, m1, h2, m2,hr,mr;
    char r;
    cin>>h1>>r>>m1>>h2>>r>>m2;
    hr=(h1+h2)/2;
    if((h2-h1)%2)
        mr=((m1+m2)/2)+30;
    else
        mr=(m1+m2)/2;
    if(mr>=60){
        hr+=mr/60;
        mr%=60;
    }
    if(hr<10)
        cout<<0;
    cout<<hr<<r;
    if(mr<10)
        cout<<0;
    cout<<mr;

}