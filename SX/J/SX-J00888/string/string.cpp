#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n;
char c[N];
int a[N];
string cnt = "0";
long long ans;
string sum;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long len = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d %c", &a[i], &c[i]);
		for (int j = 1; j <= a[i]; j++)
			sum += c[i], cnt += '0', len++;
	}
	for (int i = 0; i <= (len + 1) / 2 && cnt[i] != '1' && cnt[len - i - 1] != '1'; i++) {
		if (sum[i] != sum[len - i - 1])
			ans++, cnt[i] = '1', cnt[len - i - 1] = '1', sum[len - i - 1] = sum[i];
	}
	printf("%lld", ans);
	return 0;
}
