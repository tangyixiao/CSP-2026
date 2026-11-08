//From: CSP-J
//Problem: T1 旅游（travel） 
//Time: 2026/10/31
//文件名: travel.in/.out/.cpp
//时间限制: 1000 ms
//空间限制: 1024 MiB 
//预期得分: 100 pts 
//AK CSP-J
#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;//代表小 R 和小 X 的信息 

bool check(char r, char x) {//检查是否在车厢同一侧 
	if (r == 'D' || r == 'F') return x > 'C';//在 DF 侧 
	else return x <= 'C';//在 ABC 侧 
}

bool check1(char r, char x) {//检查是否相邻 
	if (r == 'A') return x == 'B';
	else if (r == 'B') return x == 'A' || x == 'C';
	else if (r == 'C') return x == 'B';
	else if (r == 'D') return x == 'F';
	else return x == 'D';
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {//不是同一车厢 
		cout << "0000";
		return 0;
	}
	cout << "1";
	int p1 = (s1[0] - '0') * 10 + (s1[1] - '0'), p2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	cout << bool(p1 == p2);
	cout << bool(p1 == p2 && check(s1[2], s2[2]));
	cout << bool(p1 == p2 && check1(s1[2], s2[2]));
	return 0;
}
