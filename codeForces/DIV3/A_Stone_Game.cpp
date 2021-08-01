#include <bits/stdc++.h>

using namespace std;

int maxIndex(vector<int> a, int n){
    int r=0;
    for(int i=0; i<n; i++)
        if(a[i]>a[r])
            r=i;
    return r;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        vector<int> a;
        for(int i=0; i<n; i++){
            cin >> temp;
            a.push_back(temp);
        }
        int max = max_element(a.begin(), a.end()) - a.begin(), min = min_element(a.begin(),a.end()) - a.begin(), end = a.size()-1;
        int maxEnd=end-max+1,maxB=max+1,minEnd=end-min+1,minB=min+1;
        if(maxB+minEnd==n)
            maxB>minEnd ? cout<<minEnd+1 : cout<<maxB+1;
        else if(maxEnd+minB==n)
            minB>maxEnd ? cout<<maxEnd+1 : cout<<minB+1;
        else if(maxEnd<maxB&&minEnd<minB)
            maxEnd>minEnd ? cout<<maxEnd : cout<<minEnd;
        else if(maxEnd<maxB&&minEnd>minB)
            cout<<maxEnd+minB;
        else if(maxEnd>maxB&&minEnd>minB)
            maxB>minB ? cout<<maxB : cout<<minB;
        else if(maxEnd>maxB&&minEnd<minB)
            cout<<maxB+minEnd;
        cout<<endl;
    }
}