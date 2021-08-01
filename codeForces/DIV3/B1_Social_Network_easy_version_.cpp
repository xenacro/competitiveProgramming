#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector <int> b;
    for(int i=0; i<n; i++){
            vector<int>::iterator it = find(b.begin(), b.end(), a[i]);
            if (it == b.end()){
                if (b.size() == k){
                    b.erase(b.begin());
                }
                b.push_back(a[i]);
            }
    }
    cout<<b.size()<<endl;
    for (int i = b.size()-1; i >= 0; i--)
        cout << b.at(i) << ' ';
}