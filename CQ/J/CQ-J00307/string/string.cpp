#include <bits/stdc++.h>
using namespace std;
using ll = long long;

namespace code {
	const int N = 2e5 + 5;
	int n, a[N];
	char c[N];
	
	void niam() {
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> a[i] >> c[i];
		ll ans = 0;
		for(int l = 1, r = n; l < r; ) {
//			cout << l << ' ' << r << ' ' << a[l] << ' ' << a[r] << '\n';
			int x = min(a[l], a[r]);
			if(c[l] != c[r])
				ans += x;
			a[l] -= x;
			a[r] -= x;
			if(!a[l])
				l++;
			if(!a[r])
				r--;
//			cout << l << ' ' << r << '\n';
		}
		cout << ans;
	}
}

int main() {
#ifndef _NO_FREOPEN_
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	code::niam();
	
	return 0;
}

/*
24min
*/

/*
我们的xx学校，竹树茂密，江山环抱。
我们的xx学校，教养兼施，中小并包。
xx是我们的乐园，这里的生活环境那么好。
xx是人才的苗圃，这里的培植功能那么高。
我们的大西南正待开发，我们的新中国正待建造。
xx学校，xx学校，愿在这大事业中，贡献最大的勤劳。
*/
