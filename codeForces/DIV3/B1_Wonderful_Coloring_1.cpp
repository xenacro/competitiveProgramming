#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char, int> umap;
        for(int i=0; i<s.length(); i++)
            umap[s[i]]++;
        int count=0;
        for (auto it : umap) {
            if (it.second > 1) 
                count += 2;
            else if (it.second == 1) 
                count++;
        }
        cout<<count/2<<endl;
    }
}