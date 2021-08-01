#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp,r=0;
    cin>>n;
    vector<int> od,ev;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp%2)
            od.push_back(temp);
        else 
            ev.push_back(temp);
    }
    if(od.size()>ev.size()){
        sort(od.begin(), od.end());
        for(int i=0; i<od.size()-ev.size()-1; i++)
            r+=od[i];
    }
    else if(od.size()<ev.size()) {
        sort(ev.begin(), ev.end());
        for(int i=0; i<ev.size()-od.size()-1; i++)
            r+=ev[i];
    }
    else
        r=0;
    cout<<r;
}