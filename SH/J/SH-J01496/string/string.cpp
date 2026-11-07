#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char c[200005],s[1000000];
	int n, a[200005];
	long long sum = 0, ans = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i] >> c[i];
		for (int j = sum;j < sum + a[i];j++) {
			s[j] = c[i];
		}
		sum += a[i];
	}
	for (int i = 0;i < sum / 2;i++) {
		if (s[i] == s[sum - i - 1]) continue;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
