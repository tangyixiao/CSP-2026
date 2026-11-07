#include <bits/stdc++.h>
#define int long long

using namespace std;

pair<int, char> a[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int n;
	cin >> n;
	int l = 0, r = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
		r += a[i].first;
	}
	int i = 1, j = n, mxl = a[i].first, mxr = a[j].first;
	char lv = a[i].second, rv = a[j].second;
	int sum = 0;
	while (l < r && i < j) {
		if (lv != rv && l < r)
			sum += min(mxl, mxr);
		if (mxr < mxl) {
			j--;
			rv = a[j].second;
			mxl -= mxr;
			mxr = a[j].first;
		} else if (mxr == mxl) {
			i++;
			j--;
			rv = a[j].second;
			lv = a[i].second;
			mxl = a[i].first;
			mxr = a[j].first;
		} else {
			i++;
			lv = a[i].second;
			mxr -= mxl;
			mxl = a[i].first;
		}
		l += min(mxl, mxr);
		r -= min(mxl, mxr);
	}
	cout << sum;

	return 0;
}
