#include <bits/stdc++.h>
using namespace std;
long long a[100000];
char s[100000];
char d[100000];
long long b[100000];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int ans=0;
	int n;
	cin>>n;
	int L;
	for(int j=1; j<=n; j++) {
		cin>>a[j]>>d[j];
		for(int y=1; y<=a[j]; y++) {
			s[y]=d[j];
		}
	}
	for(int t=1; t<=n; t++) {
		L+=a[t];
	}
	for(int i=1; i<=L; i++) {
		if(s[i]!=s[L-i+1]&&i!=L-i+1) {
			s[L-i+1]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
