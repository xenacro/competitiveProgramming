#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,temp;
        vector<int> b;
        cin >> n >> k;
        for (int i=0; i<n; i++){
            cin >> temp;
            vector<int>::iterator it = find(b.begin(), b.end(), temp);
        if (it == b.end()){
            b.push_back(temp);
        }
        }
    sort(b.begin(), b.end());
    // for (int i = 0; i < b.size(); i++)
    //     cout << b.at(i) << ' ';
    // cout << endl;
    if(b.back()-b.front()>2*k)
        cout << -1 << endl;
    else 
        cout << b.front()+k <<endl;
    }
}