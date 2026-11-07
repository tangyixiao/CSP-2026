#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<pair<bool, string>> p;
inline string fff(int a) {
	string s;
	while (a) {
		s += '0' + a % 2;
		a /= 2;
	}
	while (s.size() < 30) s += '0';
	return s;
}
inline long long pp(int a) {
	long long ans = 1;
	for (int i = 0; i < a; i++) ans *= 2;
	return ans;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0, a; i < n; i++) {
		cin >> a;
		v.push_back(a);
		p.emplace_back(0, fff(a));
//		cout<<fff(a)<<'\n';
	}
//	cout << "0\n";
	string s;
	for (int bi = 30; bi >= 0; bi--) {
		int num = 0;
		for (int i = 0; i < (int)p.size(); i++) {
			if (p[i].first) continue;
			if (p[i].second[bi] == '1') {
				num++;
			}
		}
		if (num >= m) {
			s += '1';
			for (int i = 0; i < (int)p.size(); i++) {
				if (p[i].first) continue;
				if (p[i].second[bi] == '0') {
//					p.erase(p.begin() + i);
//					i--;
					p[i].first = 1;
				}
			}
		} else {
			s += '0';
		}
//		cout << bi << '\n';
	}
	long long ans = 0;
	for (int i = 30; i >= 0; i--) {
		ans += pp(i) * (s[30 - i] == '1' ? 1 : 0);
	}
	cout << ans;



	/*
	int f[2010][2010];
	int n, m;
	cin >> n >> m;
	v.push_back(0);
	for (int i = 0, a; i < n; i++) {
		cin >> a;
		v.push_back(a);
		f[i + 1][1] = max(f[i][1], a);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= min(i, m); j++) {
			f[i][j] = max({f[i][j], f[i - 1][j - 1] & v[i], f[i - 1][j]});
		}
	}
	int ans = INT_MIN;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, f[i][m]);
	}
	cout << ans;
	*/
}
/*
1.可以直接用DFS枚举所有组合然后计算他们的and值最后取最大的
太暴力了时间高达O(n^m)只能过前5个测试点。
2.可以使用DP，用dp[i][j]表示考虑前i个数选择j个的最大值
可以使用dp[i][j] = max(dp[i-1][j-1] and v[i], dp[i-1][j], dp[i][j])进行转移
答案在dp[n][m]，时间复杂度O(n*m)，内存要超限，好像可以过10个测试点，先拿50分吧。
DP是错的因为以前的最大值按位与当前值不一定是最大的
反例：(1000)2 & (10)2 == (10)2 但是 (101)2 & (10)2 == (111)2
怎么办！！！！！！！！！！！！！！！！！！！！！！！！！！！
3.还要继续优化，发现其实只需要选择m个数使他的二进制最大
是否可以贪心（证明不了）或数位DP（好像不在考纲内）
4.可以直接枚举每个数字的30然后选择尽可能大的位数
应该是对的，时间复杂度O(30*n) = O(n)，没毛病
let`s goooooooooooooooooooooooooooooooooooooo
过样例了！！！！！！！！！！！！！！！！！！
niceeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
*/