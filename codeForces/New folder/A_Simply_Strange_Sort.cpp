#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i]=i+1;
        }
        // int it = find(a.begin(), a.end(), n) - a.begin();
        // cout<<it<<endl;
        int r=1;
        while(a!=b){
            if(r%2){
                for(int i=0; i<n-1; i+=2){
                    if(a[i]>a[i+1]){
                        int temp =a[i];
                        a[i]=a[i+1];
                        a[i+1]=temp;
                    }
                    // cout<<a[i]<<" "<<a[i+1]<<endl;
                }
            }
            else {
                for(int i=1; i<n-1; i+=2){
                    if(a[i]>a[i+1]){
                        int temp =a[i];
                        a[i]=a[i+1];
                        a[i+1]=temp;
                    }
                }
            }
            // for(int i=0; i<n; i++)
            //     cout<<a[i]<<" ";
            // cout<<endl;
            r++;
        }
        cout << r-1 << endl;
    }
}