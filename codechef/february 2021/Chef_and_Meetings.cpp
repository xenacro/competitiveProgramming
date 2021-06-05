#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float hp, mp;
        char c,p[2];
        cin >> hp>>c>>mp>>p;
        if(p[0]=='P' && hp<12)
            hp+=12;
        else if(p[0]=='A'&&(int)hp==12)
                hp=0;
        hp+=(mp/60);
        int n;
        cin >> n;
        while(n--){
            float hs,ms,he,me;
            char d,c,e[2];
            string s;
            cin>>hs>>d>>ms>>s>>he>>c>>me>>e;
            if(s[0]=='A'&&(int)hs==12)
                hs=0;
            else if(s[0]=='P' && hs<12)
                hs+=12;
            if(e[0]=='A'&&(int)he==12)
                he=0;
            else if(e[0]=='P' && he<12)
                he+=12;
            he+=(me/60);
            hs+=(ms/60);
            if(he>=hp && hp >=hs)
                cout<<1;
            else 
                cout<<0;
        }
        cout<<endl;
    }
}