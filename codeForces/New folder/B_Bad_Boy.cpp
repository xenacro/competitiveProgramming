#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,m,x,y;
        cin >> n >> m >> x >> y;
        if(x==1 && y == 1)
            cout<< n <<" "<< m <<" "<< n <<" "<< m<<endl;
        else if (x==n && y==m)
            cout << "1 1 1 1"<<endl;
        else 
            cout << "1 1 "<<n <<" "<<m <<endl;
    }
}