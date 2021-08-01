    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t;
        cin>>t;
        while(t--){
            int k,n,m;
            cin>>k>>n>>m;
            int a[n],b[m],ai=0,bi=0;
            vector<int> c;
            bool r=true;
            for(int i=0; i<n; i++)
                cin>>a[i];
            for(int i=0; i<m; i++)
                cin>>b[i];
            for(ai=0,bi=0; ai+bi<n+m;){
                if(a[ai]==0&&ai<n){
                    c.push_back(0);
                    k++;
                    ai++;
                }
                else if(b[bi]==0&&bi<m){
                    c.push_back(0);
                    k++;
                    bi++;
                }
                else if(a[ai]<=k&&ai<n){
                    c.push_back(a[ai]);
                    ai++;
                }
                else if(b[bi]<=k&&bi<m){
                    c.push_back(b[bi]);
                    bi++;
                }
                else {
                    r=false;
                    break;
                }
                // cout<<ai<<" "<<bi<<" "<<c.back()<<endl;
            }
            if(r)
                for(int i=0; i<n+m; i++)
                    cout<<c[i]<<" ";
            else 
                cout<<-1;
            cout<<endl;
        }
    }