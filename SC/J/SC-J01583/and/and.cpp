#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;
int n, m;
int a[MAXN];
int ans;
bool s[MAXN], s1[MAXN];
int cnt = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		s[i] = true;
	}
	
	for (int i = 30, k = 0; i >= 0; i--, k = 0) {
		for (int j = 1; j <= n; j++) if (s[j] && ((a[j] >> i) & 1)) k++, s1[j] = true;
		
		if (k >= m) ans |= (1 << i);
		
		for (int j = 1; j <= n; j++) {
			if (k >= m && s[j] && !s1[j]) s[j] = false;
			s1[j] = false;
		}
	}
	
	cout << ans;
	
	return 0;
}