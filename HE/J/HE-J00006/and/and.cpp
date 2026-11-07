#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n];
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	int z;
	sort(a,a+n,greater<int>());
	int p[m];
	for (int j=0;j<m;j++) {
		p[j]=a[j];
	}
	z = p[m];
	cout<<z;
	return 0;
}

