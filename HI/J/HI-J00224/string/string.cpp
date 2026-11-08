#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	bool f=1,ans=1,m=1;
	char y;
	long long n,sum=0,con=0,ton=0;
	cin>>n;
	string s;
	for(int i=1; i<=n; i++) {
		long long x;
		scanf("%d",&x);

		sum+=x;
		char z;
		cin>>z;
		if(f) {
			f=0;
			y=z;
		}
		if(z!=y) {
			ans=0;
			if(m) {
				m=0;
				for(int i=1; i<=ton; i++) {
					s+=y;
				}
			}
			for(int i=1; i<=x; i++) {
				s+=z;
			}
		} else {
			ton+=x;
		}


	}
	if(ans) {
		cout<<0;
		return 0;
	}
	if(sum==2) {
		if(s[0]!=s[1]) {
			con++;
		}
		cout<<con;
		return 0;
	}
	for(int i=0; i<(sum-1)/2; i++) {
		if(s[i]!=s[sum-i-1]) {
			con++;
		}
	}


	cout<<con;

	return 0;
}
