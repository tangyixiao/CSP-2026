#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N], wei = 29, ans; 
bool cmp(int a, int b) {
	int t1 = ((a >> wei) & 1) , t2 = ((b >> wei) & 1);
	if (t1 == t2) return a > b;
	return t1 > t2;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (wei; wei >= 0; wei--) {
		sort(a + 1, a + 1 + n, cmp);
		int cnt = 0;
		for (int i = 1; i <= n; i++) if (a[i] & (1 << wei)) cnt++;
		if (cnt >= m) {
			n = cnt;
			ans |= (1 << wei);
		}
	}
	printf("%d", ans);
	return 0;
}
