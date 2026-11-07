#include <bits/stdc++.h>
using namespace std;
int n, m, cur = 0;

struct trie {
	int cnt = 0, l = -1, r = -1;
} a[5000010];

void ins(int p, int now, int step) {

	a[now].cnt++;
	if (step == -1) {
		return;
	}
	if (p & (1 << step)) {
//		cout << 1;
		if (a[now].l == -1) {
			a[now].l = ++cur;
		}
		ins(p, a[now].l, step - 1);

	} else {
//		cout << 0;
		if (a[now].r == -1) {
			a[now].r = ++cur;
		}
		ins(p, a[now].r, step - 1);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int get;
		cin >> get;
		ins(get, 0, 31);
//		cout << endl;
	}
	queue<int>q;
	q.push(0);
	int ste = 32, ans = 0;
	while (ste) {
		int sum1 = 0;
		int si = q.size();
//		cout << ste << endl;
		while (si--) {
//			cout << a[a[q.front()].l].cnt << "  " << a[a[q.front()].r].cnt << endl;
			sum1 += a[a[q.front()].l].cnt;
			int t = q.front();
			q.pop();
			q.push(t);
		}
		int ju = 0;
		if (sum1 >= m) {

			ans += (1 << (ste - 1));
			ju = 1;
//			cout << "      " << ste << " " << sum1 << " " << ans << endl;
		}

		si = q.size();
		while (si--) {
			int t = q.front();
			q.pop();
			if (a[t].l != -1) {
				q.push(a[t].l);
			}
			if (ju == 0 && a[t].r != -1) {
				q.push(a[t].r);
			}
		}

		ste--;
	}
	cout << ans;
	return 0;
}
