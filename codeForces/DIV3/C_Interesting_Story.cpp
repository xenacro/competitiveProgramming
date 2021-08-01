#include <bits/stdc++.h>

using namespace std;

int myLogic(string s[], int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0; i<n; i++)
            cin>>s[i];
        unordered_map<char, int> umap;
        for(int i=0; i<n; i++){
            for(int j=0; j<s[i].length(); j++)
                umap[s[i][j]]++;
        }
        int max=0,rSum=0;
        char maxC;
        for(char a='a'; a<='e'; a++)
            if(umap[a]>max){
                max=umap[a];
                maxC=a;
            }
        // cout<<max<<endl;
        for(char a='a'; a<='e'; a++)
            if(a!=maxC){
                rSum+=umap[a];
            }
        if(max>rSum)
            cout<<n<<endl;
    }
}