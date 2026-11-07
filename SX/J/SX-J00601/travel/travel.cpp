#include <bits/stdc++.h>
using namespace std;
int a, c;
string b, d, b1, b2, d1, d2;

bool zaitongyicema(string a, string b) {
	if (a == "A" && b == "B")
		return 1;
	else if (a == "B" && b == "A")
		return 1;
	else if (a == "A" && b == "C")
		return 1;
	else if (a == "C" && b == "A")
		return 1;
	else if (a == "B" && b == "C")
		return 1;
	else if (a == "C" && b == "B")
		return 1;
	else if (a == "D" && b == "F")
		return 1;
	else if (a == "F" && b == "D")
		return 1;
	else
		return 0;
}

//bingbingbignbgibngjfjfshfahukiadhdfufhiwuehvuhbeueiavvygiuaevaveuhgbyhhu
int xianglin(string a, string b) {
	if (a == "A" && b == "B")
		return 1;
	else if (a == "B" && b == "A")
		return 1;
	else if (a == "B" && b == "C")
		return 1;
	else if (a == "C" && b == "B")
		return 1;
	else if (a == "D" && b == "F")
		return 1;
	else if (a == "F" && b == "D")
		return 1;
	else
		return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> a >> b >> c >> d;
	b2 = b[b.size() - 1];
	b.erase(b.size() - 1);
	b1 = b;
	d2 = d[d.size() - 1];
	d.erase(d.size() - 1);
	d1 = d;
	if (a == c)
		cout << 1;
	else
		cout << 0;
	if (a == c && b1 == d1)
		cout << 1;
	else
		cout << 0;
	if (a == c && b1 == d1 && zaitongyicema(b2, d2))
		cout << 1;
	else
		cout << 0;
	if (a == c && b1 == d1 && zaitongyicema(b2, d2) && xianglin(b2, d2))
		cout << 1;
	else
		cout << 0;
	return 0;
}
//gsdisydufrvtbidsbreyuvyifusdyui
