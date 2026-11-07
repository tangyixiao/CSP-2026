#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main() {
//	freopen("travel5.in", "r", stdin);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) || ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'))) {
				cout << 1;
				if (abs(s1[2] - s2[2]) == 1) cout << "1";
				else cout << "0";
			} else cout << "00";
		} else cout << "000";
	} else cout << "0000";
	return 0; 
}
/*
8:46:30 测完小样例
8:49:24 测完大样例
100pts
*/
/*
#### 游记

带了 11 个巧克力，好次~

8:13 吃了一个士力架

jx 的电脑没有 cw 的好（确信

天哪，我隔壁的人（SC-J00381）密码少复制了一个`!`，好蠢

不是这个键盘怎么这么难用ToT

T1 简单的红题

妈呀肚子好痛呜呜呜

T2 双指针+二分

10:26 吃了一个士力架

不是，隔壁的怎么老看我电脑啊，好烦
*/