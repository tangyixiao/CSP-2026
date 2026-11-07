#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<cstdio>
using namespace std;

const int N = 2e5 + 5;
int a[N];
unordered_set<int> last,now;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int maxa = 0;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		maxa = max(maxa,a[i]);
		now.insert(i);
	}
	int len = 0;
	while ((1 << len) < maxa) len++;
	int ans = 0;
	for (int i = len;i >= 0;i--) {
		last = now, now.clear();
		for (auto j : last)
			if ((a[j] >> i) & 1) now.insert(j);
		if ((int)now.size() < m) now = last;
		else ans += (1 << i);
	}
	cout << ans << '\n';
	return 0;
}
