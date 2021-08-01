#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int W,H,x1,y1,x2,y2,w,h;
        cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
        if(w+(x2-x1)>W&&h+(y2-y1)>H)
            cout<<-1<<endl;
        else if((x1>=w||W-x2>=w)||(y1>=h||H-y2>=h))
            cout << "0.000000000\n";
        else{
            float x1d = (float)w-(float)x1,x2d=(float)x2-((float)W-(float)w),y1d=(float)h-(float)y1,y2d=(float)y2-((float)H-(float)h),a[4];
            int k=0;
            // cout<<x1d<<" "<<x2d<<" "<<y1d<<" "<<y2d<<endl;
            if(x1d+w<=W)a[k++]=x1d;
            if(x2d+w<=W)a[k++]=x2d;
            if(y1d+h<=H)a[k++]=y1d;
            if(y2d+h<=H)a[k++]=y2d;
            sort(a,a+k);
            // cout<<a[0]<< ".000000000\n";
            cout<<fixed<<setprecision(9)<<(float)a[0]<<endl;
        }
    }
}