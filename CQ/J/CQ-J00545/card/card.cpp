#include <bits/stdc++.h>
#define int long long 
using namespace std;
typedef long long ll;
const int N = 5e5 + 5;
int a[N], n, m;
int ans[N], lst[N]; 
int poss;
signed main() {
//	system("FC my2.out card6.ans");
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
//	srand(time(0));
//	cout << ((rand() << 15) + rand());
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	bool f = true;
	for (int i = 1; i < n; i++) if (a[i] > a[i + 1]) f = false;
	if (f) {
//		cout <<"!!!";
		vector<int> sss(n + 5, 0);
		for (int i = 1; i <= n; i++) sss[a[i]]++;
		ll sum = 0;
		for (int i = 1; i <= m; i++) {
			sum += sss[i];
			if (i != m) cout << sum << " ";
			else cout << sum;
		}
		cout << '\n';
		return 0;
	}
	set<int> se;
	for (int i = n; i >= 1; i--) {
		if (se.count(a[i])) {
			poss = i;
			break;
		}
		se.insert(a[i]);
	}
	memset(lst, -1, sizeof lst);
	for (int i = 1; i <= m; i++) {
		for (int j = n; j >= 1; j--) {
			if (a[j] == i) {
				lst[i] = j;
				break;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		int pos = i;
		vector<int> v;
		while (true) {
			//cout << pos << ' ';
			if (pos > poss) {
				for (int j = pos; j <= n; j++) v.push_back(a[j]);
				break;
			}
			pos = lst[a[pos]];
			v.push_back(a[pos]);
			pos++;
		}
		for (int xx : v) ans[xx]++;
	}
	for (int i = 1; i <= m; i++) {
		if (i != m) cout << ans[i] << " ";
		else cout << ans[i];
	}
	cout << '\n';
	return 0;
}

