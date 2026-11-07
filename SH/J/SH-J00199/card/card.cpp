#include <bits/stdc++.h>
#define FILE(s) freopen(s".in","r",stdin), freopen(s".out","w",stdout)
#define DEBUG(s) freopen(s".err","w",stderr)
#define CloseFILE fclose(stdin), fclose(stdout)
#define CloseDEBUG fclose(stderr)
#define int long long
#define endl "\n"
using namespace std;

constexpr int MAXN = 5e5+5;
int n, m, a[MAXN], cnt1[MAXN], cnt[MAXN];

signed main() {
	FILE("card"), DEBUG("card");
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 1; i<= n; i++) cin >> a[i];
	if (n <= 5000) {
		for (int i = 1; i <= n; i++) {
			memset(cnt1, 0, sizeof(cnt1));
			stack<int> st;
			for (int j = i; j <= n; j++) {
				if (cnt1[a[j]] > 0) {
					while (st.top() != a[j]) {
						cnt1[st.top()]--;
						st.pop();
					}
					st.pop();
					cnt1[a[j]]--;
				}
				st.push(a[j]);
				cnt1[a[j]]++;
			}
			while (!st.empty()) {
				cnt[st.top()]++;
				st.pop();
			}
		}
		for (int i = 1; i <= m; i++) cout << cnt[i] << (i==m?"":" ");
//		cout << endl;
	}
//	CloseFILE, CloseDEBUG;
	return 0;
}

