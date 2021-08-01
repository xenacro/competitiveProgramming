#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,itr=1;
    cin>>t;
    while(itr<=t){
        cout<<"Case #"<<itr<<": ";
        itr++;
        int n,m;
        cin>>n>>m;
        int a[n],b[n],s[m];
        vector<int> res;
        for(int i=0; i<n; i++)
            cin>>a[i]>>b[i];
        for(int i=0; i<m; i++)
            cin>>s[i];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(s[i]<=b[j]&&a[j]<=s[i]){
                    if (find(res.begin(), res.end(), s[i]) == res.end()) {
                        res.push_back(s[i]);
                    }
                    else {
                         int pi=a[j];
                        do{
                            for(int k=a[j];k<=b[j];k++){
                                if(abs(k-s[i])<abs(pi-s[i]))
                                    pi=k;
                            }
                        }
                        while(find(res.begin(), res.end(), s[i]) != res.end());
                        res.push_back(pi);
                    }
                }
            }
        }
    }
}