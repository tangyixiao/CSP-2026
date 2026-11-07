#include <bits/stdc++.h>
using namespace std;
int n;
long long b, cnt, cnt1, cnt2;
char c[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b >> c[i];
		if (c[i] == 'a' and c[i - 1] == 'a' or i == 1) {
			cnt += b;
		} else if (c[i] == 'a' and c[i - 1] != 'a') {
			cnt1 += b;
		} else {
			cnt2 += b;
		}
	}
	if (cnt1 == 0) {
		cout << min(cnt, cnt2);
	} else {
		cout << max(cnt, cnt1) - min(cnt, cnt1);
	}
	return 0;
}