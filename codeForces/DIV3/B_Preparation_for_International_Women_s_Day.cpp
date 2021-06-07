#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k,r=0;
    cin >> n >> k;
    int a[n];
    unordered_map<int, int> b;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i] % k]++;
    }
    // for(auto & x:b)
    //     cout << x.first << ' '<<x.second<<endl;
    for (auto &x : b){
        for (auto &y : b)
            if ((x.first + y.first)%k==0 && x.first != y.first){
                r=r+min(x.second, y.second); //min(x.second, y.second)%2 ? r+min(x.second, y.second)-1 : 
            } else if((x.first + y.first)%k==0)
                r = min(x.second, y.second) % 2 ? r + min(x.second, y.second) - 1 : r + min(x.second, y.second);
    }
    cout << (r/2)*2;
}