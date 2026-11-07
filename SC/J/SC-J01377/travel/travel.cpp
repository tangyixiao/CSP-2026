#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;
int ans[10];

int calc(string s)
{
	int num = (s[0] - '0') * 10 + (s[1] - '0');
	return num;
}

int calc2(string s)
{
	int num = s[2] - 'A' + 1;
	return num;
}

int calc3(int pos)
{
	if (pos <= 3) return 0;
	return 1;
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) ans[1] = 1;
	int num1 = calc(s1), num2 = calc(s2);
	if (ans[1] && num1 == num2) ans[2] = 1;
	int pos1 = calc2(s1), pos2 = calc2(s2);
	if (ans[2] && calc3(pos1) == calc3(pos2)) ans[3] = 1;
	if (pos1 < pos2) swap(pos1, pos2);
	if (ans[3] && (pos1 - pos2 == 1 || (pos1 == 6 && pos2 == 4))) ans[4] = 1;
	for (int i = 1; i <= 4; i++)
		cout << ans[i];
	return 0;
}