#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;

	s1 = " " + s1;
	s2 = " " + s2;
	if(c1 == c2) ans = "1";
	else
	{
		ans = "0000";
		cout << ans;
		return 0;
	}
	if(s1[1] == s2[1] && s2[2] == s1[2]) ans += "1";
	else
	{
		ans = "1000";
		cout << ans;
		return 0;
	}
	int a = s1[3];
	int b = s2[3];
	if(a >= 68 && b >= 68 || a <= 67 && b <= 67) ans += "1";
	else
	{
		ans = "1100";
		cout << ans;
		return 0;
	 }

	if((s1[3] - 1 == s2[3]) || (s1[3] + 1 == s2[3]) || (s1[3] == 'D') && (s2[3] == 'F') || (s1[3] == 'F') && (s2[3] == 'D'))  ans += "1";
	else
	{
		ans = "1110";
		cout << ans;
		return 0;
	}
	cout << "1111";
	return 0;
}
