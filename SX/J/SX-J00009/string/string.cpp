#include <bits/stdc++.h>
using namespace std;
int n;
pair<long long, char> a[200010];
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%lld %c", &a[i].first, &a[i].second);
	for (int i = 1, j = n; i <= j; i++) {
		while (a[i].first > 0 && i <= j) {
			if (i == j)
				printf("%lld", ans), exit(0);
			long long num = a[j].first;
			if (a[i].second == a[j].second) {
				//2个字符相同
				a[j].first -= min(a[i].first, a[j].first);
				a[i].first -= min(a[i].first, num);
			} else {
				//2个字母不同
				ans += min(a[i].first, a[j].first);
				a[j].first -= min(a[i].first, a[j].first);
				a[i].first -= min(a[i].first, num);
			}
			if (!a[j].first)
				j--;
		}
	}
	printf("%lld", ans);
	return 0;
}