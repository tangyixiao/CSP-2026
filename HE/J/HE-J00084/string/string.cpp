#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], ans=0;
char c[200010];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i] >> c[i];
	}
	long long l=1,s=1,r=n,e=a[n];
	while (l<r) {
		if (c[l]!=c[r]) ans+=min(a[l]+1-s,e);
		if (a[l]+1-s < e) {
			e-=(a[l]+1-s);
			l++;
			s=1;
		}else if (a[l]+1-s > e) {
			s+=e;
			r--;
			e=a[r];
		}else {
			l++;
			r--;
			s=1;
			e=a[r];
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
