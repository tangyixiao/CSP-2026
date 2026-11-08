#include <bits/stdc++.h>
using namespace std;
long long n,a[200001],m;
int main() {
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	sort (a + 1,a + n + 1,greater<int>());
	long long c = a[1];
	for (int i = 2;i <= m;i ++) {
		c = c & a[i];
	}
	cout << c;
	return 0;
}
