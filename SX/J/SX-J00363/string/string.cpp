#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	struct clas {
		ll len;
		char name;
	};
	vector<clas> a(n + 5);
	ll L = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].len >> a[i].name;
		L += a[i].len;
	}
	int j = n;
	ll ans = 0;
	for (int i = 1; i < j;) {
		if (a[i].len > a[j].len && a[i].name == a[j].name) {
			a[i].len -= a[j].len;
			j--;
		}
		if (a[i].len < a[j].len && a[i].name == a[j].name) {
			a[j].len -= a[i].len;
			i++;
		}
		if (a[i].len == a[j].len && a[i].name == a[j].name) {
			a[j].len = 0;
			a[i].len = 0;
			i++;
			j--;
		}


		if (a[i].len > a[j].len && a[i].name != a[j].name) {
			ans += a[j].len;
			a[i].len -= a[j].len;
			j--;
		}
		if (a[i].len < a[j].len && a[i].name != a[j].name) {
			ans += a[i].len;
			a[j].len -= a[i].len;
			i++;
		}
		if (a[i].len == a[j].len && a[i].name != a[j].name) {
			ans += a[i].len;
			a[j].len = 0;
			a[i].len = 0;
			i++;
			j--;
		}

	}
	cout << ans;
	return 0;
}/*
NOCE
NORE
NOWA
头文件
IOS ENDL
FREOPEN
priority_queue<int,vector<int>,less<int> > q;
*/
/*
我去我写的石山代码居然过了 我爱你CCF
CCF你太好了，题好简单QWQ 今年还发超级多草稿纸真不辍
苍天保佑苍天保佑，200分先让我拿上求你了
9.49.35 T2
*/