#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2, c1, c2;
	cin >> s1 >> c1 >> s2 >> c2;
	int cn1 = (c1[0] - '0' * 10) + c1[1] - '0';
	int cn2 = (c2[0] - '0' * 10) + c2[1] - '0';
	int cc1 = int(c1[2]);
	int cc2 = int(c2[2]);
	if (s1 == s2)
		cout << 1;
	else
		cout << 0;
	if (cn1 == cn2 && s1 == s2)
		cout << 1;
	else
		cout << 0;
	if (cn1 == cn2 && ((cc1 <= 67 && cc2 <= 67) || (cc1 >= 68 && cc2 >= 68)) && s1 == s2)
		cout << 1;
	else
		cout << 0;
	if (cn1 == cn2 && ((cc2 - cc1 == 1 && cc2 != 68) || (cc1 >= 68 && cc2 >= 68)) && s1 == s2)
		cout << 1;
	else
		cout << 0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
