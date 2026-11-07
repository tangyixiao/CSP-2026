#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;
int m1 = 0, m2 = 0; //排数

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3)//判断是否在同一车厢
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}

	m1 = (int)(s2[1] - 48);//字符0对应48
	m2 = (int)(s4[1] - 48);
	if (m1 == m2)//判断是否在同一排
		cout << 1;
	else {
		cout << 0 << 0 << 0;
		return 0;
	}
	char a = (int)s2[2] - m1 + 1;//取出座位号
	char b = (int)s4[2] - m2 + 1;
	if (a >= 'A' && a <= 'C' && b >= 'A' && b <= 'C')//是否在同一侧
		cout << 1;
	else if ((a == 'D' || a == 'F') && (b == 'D' || b == 'F')) { //DF绝对坐在一起
		cout << 11;
		return 0;
	} else {
		cout << 0 << 0;
		return 0;
	}
	if (abs(a - b) == 1)//不确定两人的相对位置，且两人一定在AC之间
		cout << 1;
	else
		cout << 0;
	return 0;
}