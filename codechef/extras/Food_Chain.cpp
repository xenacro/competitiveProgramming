#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        while (a != 0)
        {
            a = a / b;
            cnt++;
        }
        cout << cnt << endl;
    }
}