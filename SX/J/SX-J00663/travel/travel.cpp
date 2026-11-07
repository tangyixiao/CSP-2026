#include <bits/stdc++.h>
using namespace std;
string s, mj;
int c1, c2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s;
	cin >> c2 >> mj;
	int s2 = s[2] - '0';
	int mj2 = mj[2] - '0';
	if (c1 != c2 ) {
		cout << "0000";
		return 0;
	}
	if (s[0] == mj[0] && s[1] == mj[1]) {
		if (s[2] >= 'A' && s[2] <= 'C' && mj[2] >= 'A' && mj[2] <= 'C') {
			if (abs(s2 - mj2) == 1) {
				cout << "1111";
				return 0;
			} else
				cout << "1110";
			return 0;
		} else if ((s[2] == 'D' && mj[2] == 'F') || (s[2] == 'F' && mj[2] == 'D')) {
			cout << "1111";
			return 0;
		} else
			//cout<<"1110";
			cout << "1100";
		return 0;
	} else
		cout << "1000";
	return 0;
}
//特殊性质 A：两个座位在同一节车厢，即 c1 = c2。
//特殊性质 B：两个座位在同一排，即 s1 的前两位与 s2 的前两位相同。
//特殊性质 C：两个座位在过道的同一侧。
//特殊性质 D：小 R 的座位是 D 座，小 X 的座位是 F 座，即 s1 的末位字符是 D，s2
//的末位字符是 F