#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int v;
	int a[n];
	char c[n]
	int p=0;
	for (int i=0;i<n;i++) {
		cin >> a[i] >> c[i];
		p += a[i].size();
	}
	char s[p];
	if (n<=1) {
		cout << 0;
	}
	int l;
	for (int j=1;j<n;j++) {
		if (c[j]==c[j-1]) {
			l++;
		}
	}
	if (l==n-1) {
		cout << 0;
	}
	return 0;
}
