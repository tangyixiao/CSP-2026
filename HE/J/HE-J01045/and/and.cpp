#include <iostream>
#include <cstdio>
#include <map>
//#include <algorithm>
using namespace::std;
const int N = 2e5 + 10;
long long a[N] = {0};
int bin[N][35] = {0};
int n, m;
//long long pow2[40] = {0};
map<long long, bool> mp;
bool cmp(long long a, long long b) {
	return a > b;
}
inline void bin_sep(int idx, long long x) {
	int cnt = 0;
	while(x) {
		bin[idx][cnt++] = x % 2;
		x /= 2;
	}
	return;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(register int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	pow2[0] = 1;
//	for(int i = 1; i <= 32; i++) pow2[i] = pow2[i - 1] << 1;
//	for(int i = 1; i <= 32; i++) printf("%lld ", pow2[i]);
//	sort(a + 1, a + n + 1, cmp);
	for(register int i = 1; i <= n; i++) {
		bin_sep(i, a[i]);
		mp[a[i]] = 1;
	}
//	for(int i = 1; i <= n; i++) {
//		for(int j = 10; j >= 0; j--) {
//			cout << bin[i][j];
//		}
//		cout << endl;
//	}
	int cnt = n, lstcnt = n;
	for(register int i = 30; i >= 0; i--) {
		lstcnt = cnt;
		for(register int j = 1; j <= n; j++) {
			if(bin[j][i] == 0 && mp[a[j]] == 1) {
				cnt--;
			}
		}
		if(cnt >= m) {
			for(register int j = 1; j <= n; j++) {
				if(bin[j][i] == 0) mp[a[j]] = 0;
			}
		} else cnt = lstcnt;
	}
	long long ans = 2147483647;
	for(register int i = 1; i <= n; i++) {
		if(mp[a[i]]) ans &= a[i];
	}
	printf("%lld\n", ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
