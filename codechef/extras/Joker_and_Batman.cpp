#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l;
        cin>>n>>m>>l;
        unordered_map<int, int> visible;
        vector<int> given(l);
        for(int i=0; i<m; i++){
            int temp;
            cin>>temp;
            // cout<<temp;
            while(temp--){
                int tempC;
                cin>>tempC;
                visible.insert({tempC, i+1});
            }
        }
        for(int i=0; i<l; i++)
            cin>>given[i];
        // cout<<"ds"<<endl;
        int res=0;
        for(int i=0; i<l; i++){
            if(visible[given[i-1]]!=visible[given[i]])
                res++;
        }
        cout<<res<<endl;
    }
}