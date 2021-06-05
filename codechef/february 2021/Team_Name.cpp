/*incomplete*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int in_array(string value, string *array)
{
    int size = (*array).size();
    for (int i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            return i;
        }
    }

    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n],q,r[n],g;
        char f;
        int a=0,b=0,freq[n],pf=0,cnt[n],lftr=0;
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                if(s[i][0]!=s[j][0]&&s[i].substr(1)!=s[j].substr(1)){
                    q=s[i][0]+s[j].substr(1);
                    g=s[j][0]+s[i].substr(1);
                    if(in_array(q, r)==-1 || in_array(g, r)==-1){
                        r[a++]=q;
                        r[a++]=g;
                        b++;
                    }
                }
            }
        }
        cout<<2*b<<endl;
    }
}

/**
 * for(int i=0; i<n; i++){
            if (q.find(s[i][0]) == string::npos){
                q.push_back(s[i][0]);
                b++;
            }
        }
        for(int i=0; i<n; i++){
            if (in_array(s[i].substr(1), r)==-1){
                freq[a]=1;
                r[a++]=s[i].substr(1);
            }
            else 
                freq[in_array(s[i].substr(1), r)]++;
        }
        for(int i=0; i<a;i++){
            cnt[i]=(b-freq[i]);
            pf=pf+(b-freq[i]);
            if(cnt[i]>1)
                lftr=lftr+(cnt[i]*(cnt[i]-1));
        }
        cout<<(pf*(pf-1))-lftr<<endl;
        
*/