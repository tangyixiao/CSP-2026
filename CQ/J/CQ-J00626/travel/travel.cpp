#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;

string c1, s1, c2, s2;

bool check(char ca) {
	if (ca <= 'C') return 0;
	else return 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << 1;
	else cout << 0;
	bool flag = (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]);
	if (flag) cout << 1;
	else cout << 0;
	if (flag && check(s1[2]) == check(s2[2])) cout <<1;
	else cout << 0;
	if (flag && abs(s2[2] - s1[2]) == 1 && check(s1[2]) == check(s2[2])) cout << 1;
	else cout << 0;
	return 0;
}
