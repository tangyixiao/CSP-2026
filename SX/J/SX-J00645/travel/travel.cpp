#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char YaoGaoChaoLe_, houmarge;

bool chexiang(string a1, string a2) {
	if (a1 == a2)
		return true;
	return false;
}

bool pai(string a10086, string a10087) {
	if (a10086[0] == a10087[0] && a10086[1] == a10087[1])
		return true;
	return false;
}

bool ce(char TouZiDice, char UUang) {
	if ((TouZiDice <= 'C' && UUang <= 'C') || (TouZiDice >= 'D' && UUang >= 'D'))
		return true;
	return false;
}

bool zuowei(char NMHNMH2, char qwq_nihao) {
	if ((abs(NMHNMH2 - qwq_nihao) == 1) || (NMHNMH2 == 'D' && qwq_nihao == 'F') || (NMHNMH2 == 'F' && qwq_nihao == 'D'))
		return true;
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (chexiang(c1, c2))
		cout << 1;
	else
		cout << 0;
	if (chexiang(c1, c2) && pai(s1, s2))
		cout << 1;
	else
		cout << 0;
	YaoGaoChaoLe_ = s1[2];
	houmarge = s2[2];
	if (chexiang(c1, c2) && pai(s1, s2) && ce(YaoGaoChaoLe_, houmarge))
		cout << 1;
	else
		cout << 0;
	if (chexiang(c1, c2) && pai(s1, s2) && ce(YaoGaoChaoLe_, houmarge) && zuowei(YaoGaoChaoLe_, houmarge))
		cout << 1;
	else
		cout << 0;
	return 0;
}
