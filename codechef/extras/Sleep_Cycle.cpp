#include <bits/stdc++.h>

using namespace std;

vector<int> zeroLengths(string s, int n){
    int r=0;
    vector <int> res;
    for(int i=0; i<n; i++){
        if(s[i]=='0')
            r++;
        else if(r!=0){
            res.push_back(r);
            r=0;
        }
    }
    if(r!=0)
        res.push_back(r);
    return res;
}

int sumOfVector(vector<int> x){
    int r=0;
    for (auto i = x.begin(); i != x.end(); ++i)
        r=r+*i;
    return r;
}

vector<int> specialSums(vector<int> x){
    vector<int> res;
    int r=0;
    for (int i = 0; i<x.size() ; ++i){
        for(int j=i; j<x.size(); ++j){
            if(r==0)
                r=r+x[j];
            else 
                r=r+((x[j])/2);
        }
        res.push_back(r);
        r=0;
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,h;
        cin>>l>>h;
        string s;
        cin>>s;
        vector<int> lengths = zeroLengths(s,l);
        int total = sumOfVector(lengths);
        cout<<*lengths.begin()<<lengths.back();
        if(total<h)
            cout<<"NO"<<endl;
        else {
            int max = *max_element(lengths.begin(), lengths.end());
            if(max>=h)
                cout<<"YES"<<endl;
            else {
                vector<int> sSum=specialSums(lengths);
                max = *max_element(lengths.begin(), lengths.end());
                if(max>=h)
                    cout<<"YES"<<endl;
                else 
                    cout<<"NO2"<<endl;
            }
        }
    }
}