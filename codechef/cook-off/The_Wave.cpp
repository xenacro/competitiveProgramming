#include <bits/stdc++.h>

using namespace std;

int polR(int x, int a[], int n){
    int r=1;
    for(int i=0; i<n; i++)
        r=r*(x-a[i]);
    return r;
}

int main(){
    long long int n, t;
    cin >> n >> t;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (long long int i = 0; i < t; i++){
        long long int x;
        cin >> x;
        long long int idx = lower_bound(arr, arr + n, x) - arr;
        if (idx < n && arr[idx] == x)
            cout << 0 << endl;
        else if (idx % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }
}

/*
for(int i=0; i<n; i++){
                if(a[i]==d){
                    p=i;
                    break;
                }
                else if(a[i]<d && a[i+1]>d){
                    z=i;
                    break;
                }
            }
            if(p!=-1)
                cout<<0<<endl;
            else {
                if(z%2){
                    if(n%2)
                        cout<<"NEGATIVE"<<endl;
                    else 
                        cout<<"POSITIVE"<<endl;
                }
                else {
                    if(n%2==0)
                        cout<<"NEGATIVE"<<endl;
                    else 
                        cout<<"POSITIVE"<<endl;
                }
            }

            */