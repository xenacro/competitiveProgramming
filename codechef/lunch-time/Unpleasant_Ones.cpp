#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        vector<int> odd, even;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp%2)
                odd.push_back(temp);
            else 
                even.push_back(temp);
        }
        for (auto i = even.cbegin(); i != even.cend(); ++i)
            cout << *i << " ";
        for (auto i = odd.cbegin(); i != odd.cend(); ++i)
            cout << *i << " ";
        cout<<endl;
    }
}