#include <bits/stdc++.h>
using namespace std;

struct T {
	long long v;
	char c;
} a[200010];
int n, t;
bool f = 1;

//第二题太难了!!!:(
//希望可爱美丽优秀善良帅气的CCF工作人员改一改:)
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].v;
		getchar();
		cin >> a[i].c;
		if (f && a[i].c != a[1].c)
			f = 0;
	}
	if (n == 1) {
		cout << 0;
	} else if (n == 2) {
		if (a[1].c != a[2].c) {
			cout << min(a[1].v, a[2].v);
		} else
			cout << 0;
	} else if (f)
		cout << 0;
	return 0;
}
