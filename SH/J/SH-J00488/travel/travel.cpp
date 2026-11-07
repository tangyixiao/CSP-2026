#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main()
{
	// ios_base::sync_wih_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << 1;
	else 
	{
		cout << "0000\n";
		return 0;
	}
	if (s1.substr(0, 2) == s2.substr(0, 2)) cout << 1;
	else
	{
		cout << "000\n";
		return 0;
	}
	if ('A' <= s1[2] && s1[2] <= 'C' && 'A' <= s2[2] && s2[2] <= 'C' ||
	    'D' <= s1[2] && s1[2] <= 'F' && 'D' <= s2[2] && s2[2] <= 'F')
		cout << 1;
	else cout << 0;	
	auto a = s1[2], b = s2[2];
	if (a < b) swap(a, b);
	if (a - b == 1 && a != 'D')
		cout << 1;
	else cout << 0;
	cout << "\n";
	return 0;
}
