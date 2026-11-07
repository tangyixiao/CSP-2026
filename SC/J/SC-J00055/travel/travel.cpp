#include <bits/stdc++.h>
using namespace std;

void solve ()
{
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
	int i = 0, num1 = 0, num2 = 0;
	while (i < 2)
	{
		num1 = num1 * 10 + (s1[i] - '0');
		num2 = num2 * 10 + (s2[i] - '0');
		i = i + 1;
	}
//	cout << num1 << " " << num2 << "\n";
	if (c1 == c2)
	{
		ans1 = 1;
		if (num1 == num2)
		{
			ans2 = 1;
			if ((('A' <= s1[2] && s1[2] <= 'C') && ('A' <= s2[2] && s2[2] <= 'C')) || (('D' <= s1[2] && s1[2] <= 'E') && ('D' <= s2[2] && s2[2] <= 'E')))
			{
				ans3 = 1;
				if (s1[2] + 0 == s2[2] + 1 || s1[2] + 1 == s2[2] + 0)
				{
					ans4 = 1;
				}
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return;
}

int main ()
{
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	solve ();
	fclose (stdin);
	fclose (stdout);
	return 0;
}