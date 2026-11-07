#include <bits/stdc++.h>
using namespace std;
const int MAXS = 2e5+5;
int n;
struct duan{
	char c;
	int l;
} d[MAXS];
long long ans;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> d[i].l >> d[i].c;
	int li = 1, ri = n;
	while(li < ri){
		int t = min(d[li].l, d[ri].l);
		if (d[li].c != d[ri].c) ans += t;
		d[li].l -= t; d[ri].l -= t;
		if (d[li].l == 0)  li++;
		if (d[ri].l == 0)  ri--;
	}
	cout << ans;
	return 0;
}
