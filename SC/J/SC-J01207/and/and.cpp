#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct stu {
	int a[40];
	int p;
} s[1000086];
int n, m;
ll ans = -1;
void bfs(int x, int y, int num[40], int sm) {
	if (x == 0) {
		ll cnt = 0;
		while (sm > 0) {
			cnt += num[sm] * pow(2, sm - 1);
			sm--;
		}
//		cout << cnt << " " << y << "\n";
		ans = max(ans, cnt);
		return ;
	}
//	if (m != 0 && y == n) {
//		return;
//	}
//	cout<<"1\n";
	for (int i = 1; i <= min(sm, s[y].p); i++) {
		if (s[y].a[i] != num[i]) num[i] = 0;
	}
	sm = min(sm, s[y].p);
	for (int i = y + 1; i <= n-x+1; i++) {
		bfs(x - 1, i, num, sm);
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		ll b;
		cin >> b;
		int j = 1;
		while (b > 0) {
			s[i].a[j] = b % 2;
			b /= 2;
			j++;
		}
		s[i].p = j;
	}
	for (int i = 1; i <= n - m; i++) {
		bfs(m, i, s[i].a, s[i].p);
	}
	cout << ans;
	return 0;
}
