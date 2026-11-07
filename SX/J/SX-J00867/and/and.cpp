#include <bits/stdc++.h>
using namespace std;
//#define int long long
int n, b, c, a[200005], m, mmax = 0, mmin = pow(2, 30);

bool cmp(int x, int y) {
	return x > y; //´óµ½Ð¡
}

//signed
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];


	}
	sort(a + 1, a + n + 1, cmp);

	for (int i = 1; i <= m; i++) {
		//}//1073741824
		if (a[i] < mmin)
			mmin = a[i];
		//}//2147483647
	}
///	int mmin = ;

	cout << mmin;
	return 0;
}