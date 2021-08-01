#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int fs6=0, ss6=0;
        for(int i=0; i<10; i+=2)
            if(s[i]=='1')
                fs6++;
        for(int i=1; i<10; i+=2)
            if(s[i]=='1')
                ss6++;
        if(abs(fs6-ss6)>2)
            cout<<6 <<endl;
        if(fs6>ss6){
            for (int i = 0; i < 6; i += 2)
                if (s[i] == '?')
                    fs6++;
            if (abs(fs6 - ss6) > 2)
                cout << 6 <<endl;
            else if((s[7]=='0' || s[7] == '?')&&(s[6]=='1'||s[6]=='?'))
                cout<< 7 <<endl;
            else if((s[7]=='0'&&s[6]=='0')||(s[7]=='1'&&s[6]=='1')){
                if((s[9]=='0' || s[9] == '?')&&(s[8]=='1'||s[8]=='?'))
                    cout<< 9 <<endl;
            }
        }
        else if(fs6<ss6){
            for (int i = 1; i < 6; i += 2)
                if (s[i] == '?')
                    ss6++;
            if (abs(fs6 - ss6) > 2)
                cout << 6 <<endl;
            else if((s[6]=='0' || s[6] == '?')&&(s[7]=='1'||s[7]=='?'))
                cout<< 8 <<endl;
            else if((s[7]=='0'&&s[6]=='0')||(s[7]=='1'&&s[6]=='1')){
                if((s[8]=='0' || s[8] == '?')&&(s[9]=='1'||s[9]=='?'))
                    cout<< 10 <<endl;
            }
        }
        else{
            if(fs6==0){
                for (int i = 0; i < 6; i += 2)
                    if (s[i] == '?')
                        fs6++;
                if (abs(fs6 - ss6) > 2)
                    cout << 6 << endl;
            }
            else if (fs6 == 1){
                for(int i=6; i<10; i += 2)
                    if (s[i] == '1')
                        fs6++;
                for (int i = 6; i < 10; i += 2)
                    if (s[i] == '1')
                        ss6++;
            }
            else if (fs6 == 2){}
            else if (fs6 == 3){}
        }
    }
}

/*
if(fs6>=ss6){
            for(int i=0; i<6; i+=2)
                if (s[i] == '?')
                    fs6++;
            if(fs6-ss6==3)
                cout<<6<<endl;
            for(int i=6; i<10; i++){
                if(i%2&&s[i]=='1')
                    ss6++;
                else if(i%2==0&&(s[i]=='1'||s[i]=='?'))
                    fs6++;
                if(fs6-ss6>9-i-1){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

*/