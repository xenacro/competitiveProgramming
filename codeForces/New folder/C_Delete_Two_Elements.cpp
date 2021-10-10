#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n],aSum=0,res=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            aSum+=a[i];
        }
        long double avg = aSum/(double)n;
        map<long double, long long int> rel;
        for(int i=0; i<n; i++){
            if(rel.find((2*avg)-a[i])!=rel.end())
                res+=rel[(2*avg)-a[i]];
            rel[a[i]]++;
        }
        cout<<res<<endl;
    }
}