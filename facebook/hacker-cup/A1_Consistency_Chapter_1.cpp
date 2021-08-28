#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c){
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int scoreCalc(string s, char c){
    int r=0; 
    for(int i=0; i<s.length(); i++){
        if(s[i]!=c){
            if(isVowel(s[i])==isVowel(c))
                r+=2;
            else 
                r++;
        }
    }
    return r;
}


int main(){
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        cout << "Case #" << tc++<<": ";
        string s, vowel="AEIOU";
        cin>>s;
        unordered_map<char, int> umap;
        for(int i=0; i<s.length(); i++)
            umap[s[i]]++;
        char mh,mhv;
        int mhf=0,mhvf=0;
        for(auto it: umap){
            if (isVowel(it.first) && it.second > mhvf){
                mhv=it.first;
                mhvf=it.second;
            }
            else if (!isVowel(it.first) && it.second > mhf){
                mh=it.first;
                mhf=it.second;
            }
        }
        cout<<min(scoreCalc(s,mh),scoreCalc(s,mhv))<<endl;
    }
}