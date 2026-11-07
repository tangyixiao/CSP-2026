#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifdef LOCAL
#define debug(x) x
#else
#define debug(x)
#endif

void FileIO(const char * inf, const char * ouf) {
	freopen(inf, "r", stdin);
	freopen(ouf, "w", stdout);
}

constexpr int MAXN = 200010;

int n, m;
ll a[MAXN];
bool disabled[MAXN];
int cnt[32][MAXN];
ll ans = 0;

void solve(int Level) {
	int ccnt = 0;
	for (int i=1;i<=n;i++) {
		if (!disabled[i] && (a[i] & (1<<Level))) {
			ccnt++;
		}
	}
	if (ccnt >= m) {
		ans += (1<<Level);
		for (int i=1;i<=n;i++) if (!disabled[i] && !(a[i] & (1<<Level))) disabled[i] = true;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	FileIO("and.in", "and.out");
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1, a+n+1);
//	for (int i=1;i<=n;i++) {
//		for (int j=29;j>=0;j--) cout<<!!(a[i]&(1<<j));
//		cout<<endl;
//	}

	// °´Î»Ì°ÐÄ  O(nlogn)
	for (int j=29;j>=0;j--) solve(j);
	cout<<ans<<endl;
}
