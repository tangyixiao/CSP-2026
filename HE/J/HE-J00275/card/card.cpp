#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 5e5 + 9, M = 3e5 + 9;
int n, m, a[N], ans[M];
set <int> f;

inline ll read();

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = read(), m = read();
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		stack <int> s;
		set <int> f;
		for (int j = i; j <= n; j++) {
			if (f.count(a[j])) {
				while (s.top() != a[j]) {
					f.erase(s.top());
					s.pop();
				}
			} else {
				s.push(a[j]);
				f.insert(a[j]);
			}
		}
		for (set <int>::iterator it = f.begin(); it != f.end(); it++) {
			ans[*it]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", ans[i]);
	}
	return 0;
}

inline ll read() {
	ll w = 0, f = 1, c = getchar();
	while (!isdigit(c)) {
		if (c == '-') {
			f = -1;
		}
		c = getchar();
	}
	while (isdigit(c)) {
		  w = w * 10 + (c ^ 48);
		  c = getchar();
	}
	return w * f;
}

// 我想出来正解了，但是现在是 11:55，啊啊啊！！！
// 11：57写完暴力了，时间都去哪了？ 
// I can't AK CSP-J 
// 以后不会再考 J 了，以后就只考 S 组了
// 遗憾…… 
// 11：58 正在清理文件目录……正在填写考生答题信息确认单 
