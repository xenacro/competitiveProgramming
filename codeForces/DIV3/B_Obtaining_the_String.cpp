#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t, s1, t1;
    cin >> s >> t;
    s1 = s;
    t1 = t;
    sort(s1.begin(), s1.end());
    sort(t1.begin(), t1.end());
    if (s1 != t1){
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++){
        if (ans.size() > 1e4){
            cout << -1 << endl;
            break;
        }
        else if (s[i] != t[i]){
            int idx = s.find(t[i], i + 1);
            if (idx < n){
                while (idx != i){
                    char temp = s[idx];
                    s[idx] = s[idx - 1];
                    s[idx - 1] = temp;
                    ans.push_back(idx);
                    idx--;
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}