#include<bits/stdc++.h> 
using namespace std;
#define ll long long
string s,fz;
char zf[200005];
ll sr[200005],n;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++) {
		cin>>sr[i]>>zf[i];
	}
	int xb=0; 
	for (int i=1;i<=n;i++) {
		for (ll j=1;j<=sr[i];j++) {
			s[xb]=zf[i];
			xb++;
		}

	}
	ll js=0;
	for (int i=xb;i>=0;i--) {
		fz[js]=s[i];
		js++;
	}
	ll jss=0;
	for (int i=1;i<=xb;i++) {
		if(s[i]!=fz[i]) {
			jss++;
		}
	} 
	cout<<jss-1;
	return 0;
}
