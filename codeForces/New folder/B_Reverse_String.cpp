#include <bits/stdc++.h>

using namespace std;

int initialLongest(string s, string r){
    for(int i=1; i<=r.length(); i++){
        size_t f = s.find(r.substr(0,i));
        // cout<<i<<r.substr(0,i)<<endl;
        if(f==string::npos)
            return i-1;
    }
    return r.length();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,r;
        cin>>s>>r;
        if(r.length()>(2*s.length())-1)
            cout<<"NO"<<endl;
        else if(r.length()==1){
            size_t found = s.find(r);
            if (found != string::npos)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if(r.length()==2){
            size_t f = s.find(r);
            reverse(r.begin(), r.end());
            size_t rf = s.find(r);
            if (f != string::npos || rf != string::npos)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            // cout << initialLongest(s, r) << endl;
            int l = initialLongest(s,r);
            string front = "", mpart = r.substr(0, l), comp = r.substr(l, l - 1);
            if(l<r.length()){
                front = r.substr((2 * l) - 1);
                reverse(front.begin(), front.end());
                reverse(comp.begin(), comp.end());
                if (mpart.substr(0, l - 1) == comp)
                {
                    front += mpart;
                    // cout<<front<<endl;
                    size_t found = s.find(front);
                    if (found != string::npos)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            else 
                cout<<"YES"<<endl;
                
            // cout<<mpart<<endl;
            // cout<<front<<endl;
            // cout << r.substr(l, l - 1) << endl;

            
        }
    }
}