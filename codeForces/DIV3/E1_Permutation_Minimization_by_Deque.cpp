#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        deque <int> deq;
        deq.push_back(a[0]);
        for(int i=1; i<n; i++)
            if(a[i]<deq.front()) deq.push_front(a[i]);
            else deq.push_back(a[i]);
        for(auto itr:deq) cout<<itr<<" ";
        cout<<endl;
    }
}