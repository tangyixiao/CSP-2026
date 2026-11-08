#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
typedef long long ll;
int n, m;
int a[N], lst[N];
int ans[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("card6.in", "r", stdin);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		lst[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		ans[a[i]]++;
		if(i > 1 && lst[a[i - 1]] == i - 1) {
			ans[a[i]] += ans[a[i - 1]];
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
}
/*
往后找最后一个与当前相同的
 
*/
