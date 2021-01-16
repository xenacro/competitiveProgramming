#include <bits/stdc++.h>

using namespace std;

void Ssort(string s[], int n){
    for (int i = 1; i < n; i++){
        string temp = s[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length()){
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = temp;
    }
}

int main(){
    int n,r=1;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    Ssort(s,n);
    for(int i=1; i<n; i++){
        size_t f=s[i].find(s[i-1]);
        if(f!=string::npos)
            r++;
    }
    if(r==n){
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
            cout<<s[i]<<endl;
    }
    else 
        cout<<"NO";
}