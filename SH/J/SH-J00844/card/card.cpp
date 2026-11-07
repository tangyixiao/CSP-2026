#include<iostream>
#include<cstdio>
using namespace std;

const int N = 5005,M = 3005;
int a[N],s[N][M],last[M],now[M],ans[M];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		for (int j = 1;j <= m;j++) {
			s[i][j] = s[i - 1][j];
			if (a[i] == j) s[i][j]++;
		}
		if (i != n) last[a[i]] = max(last[a[i]],i);
	}
	for (int i = 1;i <= n;i++) {
		int mx = i;
		for (int j = 1;j <= m;j++)
			if (s[n][j] - s[i - 1][j] > 1) mx = max(mx,last[j]);
		for (int j = n;j >= mx;j--)
			ans[a[j]]++;
	}
	for (int i = 1;i <= m;i++) cout << ans[i] << ' ';
	cout << '\n';
	return 0;
}
