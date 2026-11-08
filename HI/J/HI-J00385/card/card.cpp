#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define bep(i, a, b) for(int i = (a); i >= (b); i--)
using namespace std;
const int maxn = 5e5 + 5, maxm = 3e5 + 5;
int n, m;
int a[maxn], dp[maxn], ans[maxn];
int main() { 
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	rep(i, 1, n) {
		cin >> a[i];
	}
	rep(i, 1, n) {
		memset(dp, 0, sizeof(dp));
		rep(j, i, n) {
			cout << "j:" << j << endl;
			if(dp[a[j]] != 0) {
				int idx = i - 1;
				while(a[idx] != a[j] && a[j] > i) {
					cout << "idx:" << idx << endl;
					dp[a[idx]]--;
				    idx--;
				}
			}
			else {
				dp[a[j]]++;
			}
		}
		rep(i, 1, m) {
			ans[i] += (dp[i] >= 0);
		}
	}
	rep(i, 1, m) {
		cout << ans[i] << ' ';
	}
	return 0;
}
