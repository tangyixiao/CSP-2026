#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200005
struct node{
	int num;
	char ch;
}a[N];
struct did{
	int id, num;
	char ch;
}l, r;
int n, sum[N], ans, pos;
signed main(){
#ifndef LCY
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
#else
#endif
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i].num >> a[i].ch;
		sum[i] = sum[i - 1] + a[i].num;
	}
	pos = lower_bound(sum + 1, sum + n + 1, (sum[n] + 1) / 2) - sum;
	if (sum[n] % 2) {
		l = did{pos, sum[n] / 2 - sum[pos - 1], a[pos].ch};
		r = did{pos, sum[pos] - (sum[n] + 1) / 2, a[pos].ch};
	}
	else {
		r = did{pos, sum[pos] - sum[n] / 2, a[pos].ch};
		l = did{pos, sum[n] / 2 - sum[pos - 1], a[pos].ch};
	}
	
	while(l.id && r.id <= n){
		if (l.ch == r.ch){
			if (l.num > r.num){
				l.num -= r.num;
				r = did{r.id + 1, a[r.id + 1].num, a[r.id + 1].ch};
			}
			else if (l.num == r.num){
				l = did{l.id - 1, a[l.id - 1].num, a[l.id - 1].ch};
				r = did{r.id + 1, a[r.id + 1].num, a[r.id + 1].ch};
			}
			else {
				r.num -= l.num;
				l = did{l.id - 1, a[l.id - 1].num, a[l.id - 1].ch};
			}
		}
		else {
			if (l.num > r.num){
				ans += r.num;
				l.num -= r.num;
				r = did{r.id + 1, a[r.id + 1].num, a[r.id + 1].ch};
			}
			else if (l.num == r.num){
				ans += r.num;
				l = did{l.id - 1, a[l.id - 1].num, a[l.id - 1].ch};
				r = did{r.id + 1, a[r.id + 1].num, a[r.id + 1].ch};
			}
			else {
				ans += l.num;
				r.num -= l.num;
				l = did{l.id - 1, a[l.id - 1].num, a[l.id - 1].ch};
			}
		}
//		cout << l.id << " " << l.num  << " " << l.ch << '\n';
//		cout << r.id << " " << r.num  << " " << r.ch << '\n';
	}
	cout << ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/