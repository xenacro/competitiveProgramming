#include <bits/stdc++.h>
#include <string>

using namespace std;

int sizecount(string s){
    int r=0;
    for(string::iterator i=s.begin(); i!=s.end(); ++i)
        r++;
    return r;
}
int main(){
    int n;
    cin>>n;
    int p=n;
    while(n--){
        string a;
        int p=1;
        cin>>a;
        sort(a.begin(), a.end());
        for(int i=1; i<sizecount(a); i++){
            if(a[i]-a[i-1]==1)
                p++;
        }
        if(p==sizecount(a))
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;    
    }
}