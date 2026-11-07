#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200010],ans;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m >> a[1];
	int m1=a[1],m2,m3=a[1];
	bool C=(a[1]<4); 
	for (int i=2; i<=n; i++) {
		cin >> a[i];
		m1 = max(m1,a[i]);
		m2 = m2&a[i];
		if (a[i]>=4) {
			C=0;
		}
	}
	if (m==1) {
		cout << m1;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}if (m==n) {
		cout << m2;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}if (m==2 && n<10000) {
		for (int i=1; i<=n; i++) {
			for (int j=i+1; j<=n; j++) {
				m3 = max(m3,a[i]&a[j]);
			}
		}
		cout << m3;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}if (C) {
		int l[4]={0,0,0,0};
		for (int i=1; i<=n; i++) {
			l[a[i]]++;
		}
		if (m<=l[3]) {
			cout << 3;
		}else if (m<=l[3]+l[2]) {
			cout << 2;
		}else {
			cout << 1;
		}
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	sort(a+1,a+n+1);
	ans=a[n];
	for (int i=2; i<=m; i++) {
		ans = ans&a[n-i+1];
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
