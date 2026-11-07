#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool flag = true;
	string ans = "";
	if(c1 == c2) ans += '1';
	else
	{
		flag = false;
		ans += '0';
	}
	string z1 = s1.substr(0, 2);
	string z2 = s2.substr(0, 2);
	if(z1 == z2 && flag) ans +='1';
	else
	{
		flag = false;
		ans += '0';
	}
	if((s1[2] <= 'C' && s1[2] >= 'A' && s2[2] <= 'C' && s2[2] >= 'A') || (s1[2] <= 'F' && s1[2] >= 'D' && s2[2] <= 'F' && s2[2] >= 'D'))
	{
		if(flag) ans += '1';
		else ans += '0';
	}
	else
	{
		ans += '0';
		flag = false;
	}
	if((s1[2] - 'A' + 1 == s2[2] - 'A' || s1[2] - 'A' == s2[2] - 'A' + 1) && flag) ans += '1';
	else ans += '0';
	cout << ans;
	return 0;
}
