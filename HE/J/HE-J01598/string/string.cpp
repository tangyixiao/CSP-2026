# include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r".stdin);
	freopen("string.out","w".stdout);
	long long n;
	cin>>n;
	int a[n];
	char c[110];
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
	}
	for(long long i=1; i<=n; i++) {
		if(n>=3) {
			if(a[1]<a[2]) {
				cout<<a[0]<<endl;
				break;
			}
			if(a[1]>a[n]) {
				if(a[1]==a[2]) {
					cout<<a[1];
					break;
				} else {
					cout<<a[n];
					break;
				}
			}
			if(a[i]==a[n]) {
				cout<<a[i];
				break;
			}
		}
		cout<<a[n]<<endl;
		if(c[i]==c[i+1]) {
			cout<<0;
			break;
		}
		if(n==2) {
			if(a[1]<a[2]) {
				cout<<a[1];
			} else {
				cout<<a[n]<<endl;
				break;
			}

		}
		if(n==1) {
			cout<<0<<endl;
			break;
		}
	}
	return 0;
}
