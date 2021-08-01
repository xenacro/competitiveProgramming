#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp;
    cin >> n;
    int a[n];
    vector<int> b;
    for (int i=0; i<n; i++){
        cin >> temp;
        vector<int>::iterator it = find(b.begin(), b.end(), temp);
        if (it == b.end()){
            b.push_back(temp);
        }
    }
    sort(b.begin(), b.end());
    if(b.size()==1){
        cout<<0;
    }
    else if(b.size()==2){
        (b[1]-b[0])%2 ? cout<<b[1]-b[0] : cout<<(b[1]-b[0])/2;
    }
    else if(b.size()==3){
        int d1=b[1]>b[0]?b[1]-b[0]:b[0]-b[1], d2=b[2]>b[1]?b[2]-b[1]:b[1]-b[2];
        if(d1==d2)
            cout<<d1;
        else 
            cout<<-1;
    }
    else
        cout << -1;
    // cout<<b.size();
}

/*
sort(a,a+n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            b[i][j] = a[i]>a[j] ? a[i] - a[j] : a[j] - a[i];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<n-1; i++){
        b[i]=a[i+1]-a[i];
        if(b[i]==0)
            s++;
    }
    sort(b,b+n-1);
    for(int i=0; i<n-2; i++){
        if(b[i+1]==b[i] && b[i]!=0){
            r++;
            p=i;
        }
    }
    // cout<<s<<r;
    if(r==0 && r+s==n-2 && b[n-2]%2==0)
        cout<<b[n-2]/2;
    else if(r+s==n-2)
        cout<<b[n-2];
    else if(s==n-1)
        cout<<0;
    else 
        cout<<-1;

*/