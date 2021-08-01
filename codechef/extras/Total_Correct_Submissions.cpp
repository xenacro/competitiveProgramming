#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        string tempS;
        cin>>n;
        unordered_map<string, int> unmap;
        vector<int> output;
        for(int i=0; i<3*n; i++){
            cin>>tempS>>temp;
            unmap[tempS]+=temp;
            // cout<<tempS<<" "<<temp;
        }
        for (auto x : unmap)
            output.push_back(x.second);
        sort(output.begin(), output.end());
        for (auto i = output.begin(); i != output.end(); ++i)
            cout << *i << " ";
        cout<<endl;
    }
}