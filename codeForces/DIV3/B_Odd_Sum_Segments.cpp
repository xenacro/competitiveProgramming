#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> countOddFreq(int arr[], int n){
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++){
        if(arr[i]%2)
            mp[arr[i]]++;
    }
    return mp;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k,oc=0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<int, int> mp = countOddFreq(a,n);
        for (auto &x : mp){
            // cout<<x.first <<" -> "<<x.second<<endl;
            if(x.second%2)
                oc++;
        }
        if(k==1 && oc%2==0)
            cout << "NO" << endl;
        // cout<<"======="<<oc<<"========"<<endl;
        else if(oc<k)
            cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            vector<int> res;
            for (auto &x : mp){
            // cout<<x.first <<" -> "<<x.second<<endl;
            if(x.second%2)
                for(int i=0; i<n; i++)
                    if (a[i] == x.first && res.size()<k)
                    {
                        res.push_back(i+1);
                        break;
                    }
        }
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size(); i++)
            cout << res.at(i) << ' ';
        cout<<endl;
        }
    }
}