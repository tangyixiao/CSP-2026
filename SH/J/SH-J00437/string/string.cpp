#include <iostream>
#include <stdio.h>
#include <vector> 
using namespace std;

struct Itv {
	long long a;
	char c;
};

int n;
int a[200010];
vector<Itv> v;
char c[200010];
//long long l;
//int lft, rgt;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	long long len = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
//		l += a[i];
		if (c[i] == c[i - 1]) {
			len += a[i];
			continue;
		}
		if (i > 1) v.push_back({ len, c[i - 1] });
		len = a[i];
	}
	v.push_back({ len, c[n] });
//	lft = 0, rgt = v.size() - 1;
	while (!v.empty()) {
//		cout << '?';
		auto rt = v.begin();
		auto it = v.end();
		Itv hd = (*rt);
		Itv tl = (*(--it));
//		cout << (*it).a << endl;
		if (v.size() == 1) break;
//		cout << hd.a << ' ' << hd.c << ' ' << tl.a << ' ' << tl.c << ' ' << ans << endl;
		if (hd.a == tl.a) {
			ans += (hd.c != tl.c) * hd.a;
			v.erase(it);
			v.erase(rt);
//		cout << hd.a << ' ' << hd.c << ' ' << tl.a << ' ' << tl.c << ' ' << ans << ' ' << v.size() << endl;
			continue;
		}
		if (hd.a > tl.a) {
			ans += (hd.c != tl.c) * tl.a;
			(*rt).a -= tl.a;
			v.erase(it);
			continue;
		}
		ans += (hd.c != tl.c) * hd.a;
		(*it).a -= hd.a;
		v.erase(rt);
	}
	cout << ans << endl;
	return 0;
}
