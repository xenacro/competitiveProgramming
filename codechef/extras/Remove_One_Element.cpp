#include <bits/stdc++.h>
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
    fast_IO;
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n],b[n-1];
        for(long long int i=0; i<n; i++)
            cin>>a[i];
        for(long long int i=0; i<n-1; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n-1);
        if(n==3){
            long long int a0b0=b[0]-a[0],a1b0=b[0]-a[1],a1b1=b[1]-a[1],a2b1=b[1]-a[2];
            vector<long long int> r;
            r.push_back(a0b0);
            r.push_back(a1b0);
            r.push_back(a1b1);
            r.push_back(a2b1);
            unordered_map<long long int, long long int> umap;
            for(long long int i=0; i<4; i++)
                umap[r[i]]++;
            long long int m=a0b0, m2=-1;
            for(auto x:umap){
                if(x.second>umap[m]&&x.first>0)
                    m=x.first;
                else if(x.second==umap[m]&&(x.second>umap[m2]||m2==-1)&&x.first>0)
                    m2=x.first;
            }
            if(m2==-1)
                cout<<m<<endl;
            else 
                cout<<min(m2,m)<<endl;
        }
        if(n==2){
            if(a[0]>b[0])
                cout<<b[0]-a[1]<<endl;
            else if(a[1]>b[0])
                cout<<b[0]-a[0]<<endl;
            else
                cout << min(b[0] - a[0], b[0] - a[1])<<endl;
        }
        else {
            long long int a0b0=b[0]-a[0],a1b0=b[0]-a[1],a1b1=b[1]-a[1],an2bn3=b[n-3]-a[n-2],an2bn2=b[n-2]-a[n-2],an1bn2=b[n-2]-a[n-1];
            vector<long long int> r;
            r.push_back(a0b0);
            r.push_back(a1b0);
            r.push_back(a1b1);
            r.push_back(an2bn3);
            r.push_back(an2bn2);
            r.push_back(an1bn2);
            unordered_map<long long int, long long int> umap;
            for(long long int i=0; i<6; i++)
                umap[r[i]]++;
            long long int m=r[0], m2=-1;
            for(auto x:umap){
                if(x.second>umap[m]&&x.first>0)
                    m=x.first;
                else if(x.second==umap[m]&&(x.second>umap[m2]||m2==-1)&&x.first>0)
                    m2=x.first;
                // cout<<x.first<<" "<<x.second<<endl;
            }
            if(m2==-1)
                cout<<m<<endl;
            else 
                cout<<min(m2,m)<<endl;
        }
    }
}