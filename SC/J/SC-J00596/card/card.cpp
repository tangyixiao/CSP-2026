#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IL inline
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define FIO(name) freopen(name".in", "r", stdin), freopen(name".out", "w", stdout);
#define pii pair<int, int>
#define fst first
#define snd second
#define lop(i, a, b) for (auto i = (a); i <= (b); i++)
#define pol(i, a, b) for (auto i = (a); i >= (b); i--)
#define asmax(a, b) ((a) = max((a), (b)))
#define asmin(a, b) ((a) = min((a), (b)))
const int N = 5e5 + 5, M = 3e5 + 5;
int n, m, a[N], cnt[M], ans[M];
stack<int> s;
int main () {
	FIO("card");
	IOS;
	cin >> n >> m;
	lop(i, 1, n) cin >> a[i];
	lop(i, 1, n) {
		lop(j, 1, m) cnt[j] = 0;
		lop(j, i, n) {
			if (cnt[a[j]]) while (!s.empty() && s.top() != a[j]) cnt[s.top()]--, s.pop();
			else s.push(a[j]), cnt[a[j]]++;
		}
		while (!s.empty()) ans[s.top()]++, s.pop();
	}
	lop(i, 1, m) {
		cout << ans[i];	
		if (i != m) cout << ' ';
	} 
	return 0;
}