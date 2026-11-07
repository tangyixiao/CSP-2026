#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("traval.in", "r", stdin);
	freopen("traval.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << 1;
	else{
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	string a, b;
	a = s1.substr(0, 2);
	b = s2.substr(0, 2);
	if (a == b) cout << 1;
	else{
		cout << 0 << 0 << 0;
		return 0;
	}
	a = s1[2]; b = s2[2];
	if ((a == "A" && (b == "B" || b == "C")) || (a == "B" && (b == "A" || b == "C")) || (a == "C") && (b == "A" || b == "B"))
		cout << 1;
	else if ((a == "D" && b == "F") || (a == "F" && b == "D"))
	{
		cout << 1 << 1;
		return 0;
	}
	else
	{
		cout << 0 << 0;
		return 0;
	}
	if ((a == "B" && b == "A") || (a == "A" && b == "B"))
		cout << 1;
	else if ((a == "B" && b =="C") || (a== "C" && b == "B"))
		cout << 1;
	else cout << 0;
	return 0;
}
