/*incomplete*/
#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int myLogic(int n, int (&a)[][3], int r, int b){
    if(n==4){
        if(a[r+0][1]<=a[r+1][1] && a[r+1][1]<=a[r+2][1] && a[r+2][1]<=a[r+3][1]){
            return r;
        }
        if(a[r+0][1]<=a[r+1][1] && a[r+1][1]<=a[r+3][1] && a[r+3][1]<=a[r+2][1]){
            return myLogic(2,a,r,2);
        }
        if ((a[r+0][1]<=a[r+2][1] && a[r+2][1]<=a[r+1][1] && a[r+1][1]<=a[r+3][1]) || (a[r+0][1]<=a[r+2][1] && a[r+2][1]<=a[r+3][1] && a[r+3][1]<=a[r+1][1]) || (a[r+0][1]<=a[r+3][1] && a[r+3][1]<=a[r+1][1] && a[r+1][1]<=a[r+2][1]) || (a[r+0][1]<=a[r+3][1] && a[r+3][1]<=a[r+2][1] && a[r+2][1]<=a[r+1][1]))
        {
            return myLogic(3,a,r,1);
        }
        if(a[r+1][1]<=a[r+0][1] && a[r+0][1]<=a[r+2][1] && a[r+2][1]<=a[r+3][1]){
            
        }
        if(a[r+1][1]<=a[r+0][1] && a[r+0][1]<=a[r+3][1] && a[r+3][1]<=a[r+2][1]){
            
        }
        if(a[r+1][1]<=a[r+2][1] && a[r+2][1]<=a[r+0][1] && a[r+0][1]<=a[r+3][1]){
            
        }
        if(a[r+1][1]<=a[r+2][1] && a[r+2][1]<=a[r+3][1] && a[r+3][1]<=a[r+0][1]){
            
        }
        if(a[r+1][1]<=a[r+3][1] && a[r+3][1]<=a[r+2][1] && a[r+2][1]<=a[r+0][1]){
            
        }
        if(a[r+1][1]<=a[r+3][1] && a[r+3][1]<=a[r+0][1] && a[r+0][1]<=a[r+2][1]){
            
        }
        if(a[r+2][1]<=a[r+0][1] && a[r+0][1]<=a[r+1][1] && a[r+1][1]<=a[r+3][1]){
            
        }
        if(a[r+2][1]<=a[r+0][1] && a[r+0][1]<=a[r+3][1] && a[r+3][1]<=a[r+1][1]){
            
        }
        if(a[r+2][1]<=a[r+1][1] && a[r+1][1]<=a[r+0][1] && a[r+0][1]<=a[r+3][1]){
            
        }
        if(a[r+2][1]<=a[r+1][1] && a[r+1][1]<=a[r+3][1] && a[r+3][1]<=a[r+0][1]){
            
        }
        if(a[r+2][1]<=a[r+3][1] && a[r+3][1]<=a[r+1][1] && a[r+1][1]<=a[r+0][1]){
            
        }
        if(a[r+2][1]<=a[r+3][1] && a[r+3][1]<=a[r+0][1] && a[r+0][1]<=a[r+1][1]){
            
        }
        if(a[r+3][1]<=a[r+1][1] && a[r+1][1]<=a[r+0][1] && a[r+0][1]<=a[r+2][1]){
            
        }
        if(a[r+3][1]<=a[r+1][1] && a[r+1][1]<=a[r+2][1] && a[r+2][1]<=a[r+0][1]){
            
        }
        if(a[r+3][1]<=a[r+0][1] && a[r+0][1]<=a[r+1][1] && a[r+1][1]<=a[r+2][1]){
            
        }
        if(a[r+3][1]<=a[r+0][1] && a[r+0][1]<=a[r+2][1] && a[r+2][1]<=a[r+1][1]){
            
        }
        if(a[r+3][1]<=a[r+2][1] && a[r+2][1]<=a[r+0][1] && a[r+0][1]<=a[r+1][1]){
            
        }
        if(a[r+3][1]<=a[r+2][1] && a[r+2][1]<=a[r+1][1] && a[r+1][1]<=a[r+0][1]){
            
        }
    }
    else if(n==3){
        if(a[r+0][1]<=a[r+1][1] && a[r+1][1]<=a[r+2][1]){
            return r;
        }
        if(a[r+0][1]<=a[r+2][1] && a[r+2][1]<=a[r+1][1]){
            return myLogic(2,a,r,1);
        }
        if(a[r+1][1]<=a[r+0][1] && a[r+0][1]<=a[r+2][1]){
            
        }
        if(a[r+1][1]<=a[r+2][1] && a[r+2][1]<=a[r+0][1]){
            
        }
        if(a[r+2][1]<=a[r+0][1] && a[r+0][1]<=a[r+1][1]){
            
        }
        if(a[r+2][1]<=a[r+1][1] && a[r+1][1]<=a[r+0][1]){
            
        }
    }
    else {
        if(a[r+0][1]<=a[r+1][1] && a[r+1][1]<=a[r+2][1]){
            return r;
        }
        if(a[r+1][1]<=a[r+0][1] && a[r+0][1]<=a[r+2][1]){
            if(a[r+0][2]>1)
                return r+1;
            else 
                return r+2;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][3];
        for(int i=0; i<n; i++){
            cin>>a[i][1];
            a[i][0]=i;
        }
        for(int i=0; i<n; i++)
            cin>>a[i][2];
        
        
    }
}

/*
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
for (int i = n - 1; i >= 0; i--)
{
    for (int j = n - i - 1; j > 0; j--)
    {
        if (a[j][1] < a[j - 1][1])
        {
            swap(&a[j][1], &a[j - 1][1]);
            swap(&a[j][0], &a[j - 1][0]);
            a[j][0] += a[j - 1][2];
            swap(&a[j][2], &a[j - 1][2]);
        }
    }
}
for (int i = 0; i < n; i++)
    cout << a[i][0] << " ";
cout << endl;
for (int i = 0; i < n; i++)
    cout << a[i][1] << " ";
cout << endl;
for (int i = 0; i < n; i++)
    cout << a[i][2] << " ";
cout << endl
     << "-------" << endl;
     */