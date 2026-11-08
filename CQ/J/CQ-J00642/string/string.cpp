//From: CSP-J
//Problem: T2 回文串（string） 
//Time: 2026/10/31
//文件名: string.in/.out/.cpp
//时间限制: 1000 ms
//空间限制: 1024 MiB 
//预期得分: 100 pts 
//AK CSP-J
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
constexpr int N = 2e5 + 10;

int n;
struct Node {
	int a;//个数 
	char c;//字符
	void input() {
		cin >> a >> c;
	}
}s[N];
ll ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i ++) s[i].input();
	int l = 1, r = n;
	while (l < r) { //用双指针模拟 
		Node &ls = s[l], &rs = s[r];
		if (ls.a < rs.a) {//应该改左边 
			ans += 1LL * ls.a * (ls.c != rs.c);//字符相同不需要改 要开long long 
			rs.a -= ls.a;
			l ++;//指针向右移动 
		} else {
			ans += 1LL * rs.a * (ls.c != rs.c);//字符相同不需要改 
			ls.a -= rs.a;
			r --;//指针向左移动 
		}
	}
	cout << ans;
	return 0;
}//479681762610
