#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n;i++)
            cin>>a[i];
        for(int i=0; i<n;i++)
            cin>>b[i];
        vector<int> ra, rb;
        int g=0,l=0,temp=0;
        for(int i=0; i<n; i++){
            if(a[i]==b[i])
                continue;
            else if(a[i]>b[i]){
                temp = a[i] - b[i];
                g+=temp;
                while(t--)
                    ra.push_back(i+1);
            }
            else {
                temp = b[i] - a[i];
                l+=temp;
                while(temp--)
                    rb.push_back(i+1);
            }
        }
        if(g!=l)
            cout<<-1<<endl;
        else {
            cout<<g<<endl;
            for(int i=0; i<ra.size(); i++)
                cout<<ra[i]<<" "<<rb[i]<<endl;
        }
    }
}

/*
int main()
{
	int test; cin >> test;
	while (test--)
	{
		vector<int> a, b;
		int greater = 0, lesser = 0, n = 0, t = 0;

		cin >> n;

		vector<int> first(n), second(n);

		for (int idx = 0; idx < n; idx++) {
			cin >> first[idx];
		}

		for (int idx = 0; idx < n; idx++)  {
			cin >> second[idx];
		}



		for (int idx = 0; idx < n; idx++) {

			if (first[idx] == second[idx]) continue;

			else if (first[idx] > second[idx]) {
				t = first[idx] - second[idx];
				greater += first[idx] - second[idx];

				while (t--) {
					a.push_back(idx + 1);
				}
			}

			else {
				t = second[idx] - first[idx];
				lesser += second[idx] - first[idx];

				while (t--) {
					b.push_back(idx + 1);
				}
			}
		}

		if (greater != lesser) {
			cout << -1 << nline;
		}
		else {
			cout << greater << nline;

			for (int i = 0; i < a.size(); i++) {
				cout << a[i] << " " << b[i] << nline;
			}
		}



	}

	return 0;
}
 */