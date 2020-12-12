#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,s=0;
    cin >> n >> m;
    int a[n][2], r[m];
    for (int i = 0; i < n; i++){
        cin >> a[i][0];
        cin >> a[i][1];
    }
    for(int i=1; i<=m; i++){
        r[i]=i;
        for(int j=0; j<n; j++){
            if(i<=a[j][1] && i>=a[j][0])
                r[i]=0;
        }
    }
    for(int i=1; i<=m; i++){
        if(r[i])
            s++;
    }
    cout<<s<<endl;
    for(int i=1; i<=m; i++)
        if(r[i])
            cout<<i<<" ";
    

}