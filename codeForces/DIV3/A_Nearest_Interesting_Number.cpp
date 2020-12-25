#include <bits/stdc++.h>

using namespace std;

int digiSum(int i,int x){
    if(x<10)
        return i+x;
    else 
        return digiSum(i+(x%10), x/10);
}

int main(){
    int a,r=0;
    cin>>a;
    while(digiSum(0, a)%4!=0)
        a++;
    cout<<a;
}