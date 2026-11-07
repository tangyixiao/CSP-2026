#include <cstdio>
using namespace std;
int n, m;
int a[200005];
int b[200005][35];
bool v[200005];
bool vv[200005]; 
int ans = 0;
int flag;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		//if (a[i] == 262142) printf("1");
		//if (a[i] == 262443) printf("2");
		int t = a[i];
		for (int j = 1; j <= 30 && t; j++) {
			b[i][j] = t & 1;
			t >>= 1;
		}
	}
	for (int i = 1; i <= n; i++) vv[i] = 1;
	for (int i = 30; i >= 1; i--) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) v[j] = 0;
		for (int j = 1; j <= n; j++) {
			if (vv[j] && b[j][i]) {
				cnt++;
				v[j] = 1;
			}
		}
		if (cnt >= m) for (int j = 1; j <= n; j++) if (!v[j]) vv[j] = 0;
		if (cnt == m) break;
	}
	for (int i = 1; i <= n; i++) {
		if (vv[i]) {
			if (flag == 0) {
				ans = a[i];
			} else ans &= a[i];
			flag++;//printf("%d\n", ans);
			if (flag == m) break;
		}
	}
	//printf("%d\n", flag);
	printf("%d", ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 