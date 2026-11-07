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
const int N = 2e5 + 5;
int n, a[N];
char c[N];
ll sum, ans;
int main () {
	FIO("string");
	IOS;
	cin >> n;
	lop(i, 1, n) cin >> a[i] >> c[i], sum += a[i];
	if (sum > 100000000) return cout << 0, 0;
	string s;
	lop(i, 1, n) lop(j, 1, a[i]) s += c[i];
	int i = 0, j = (int)s.size()-1;
	while (i <= j) {
		if (s[i] != s[j]) ans++;
		i++, j--;
	}
	cout << ans;
	return 0;
}